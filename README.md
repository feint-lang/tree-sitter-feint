# [tree-sitter] implementation for [feint]

> NOTE: This is a work in progress.

## Installation

1. Install the [tree-sitter CLI] with `brew install tree-sitter` or the
   equivalent on your platform.
 
2. Clone this repo:

   ```shell
   git clone git@github.com:wylee/tree-sitter-feint.git ~/path/to/tree-sitter-feint
   ```

### Neovim

> NOTE: The following seems rather convoluted. Hopefully this can be
> simplified eventually.

> NOTE: Adjust paths as needed in all the code snippets below.

1. Install the [nvim-treesitter] plugin. You can use [pathogen],
   [vim-plug], etc.

2. Link the `tree-sitter` queries used for syntax highlight:

   ```shell
   ln -s ~/path/to/tree-sitter-feint/queries ~/.config/nvim/bundle/nvim-treesitter/queries/feint
   ```

3. Add the following to your `~/.config/nvim/init.lua`:

   ```lua
   -- NOTE: This line is only needed if you have an init.vim that you
   --       need to load too (e.g., to load your plugins).
   vim.cmd [[source ~/.config/nvim/legacy.vim]]
 
   vim.filetype.add({
     extension = {
       fi = "feint",
     },
   })
 
   local parser_config = require "nvim-treesitter.parsers".get_parser_configs()
 
   parser_config.feint = {
     install_info = {
       url = "~/path/to/tree-sitter-feint",
       files = {"src/parser.c", "src/scanner.cc"},
       generate_requires_npm = false,
       requires_generate_from_grammar = false,
     },
     filetype = "fi",
   }
 
   require"nvim-treesitter.configs".setup {
     highlight = {
       enable = true,
       additional_vim_regex_highlighting = false,
     },
     indent = {
       enable = true,
     },
   }
 
   local ft_to_parser = require"nvim-treesitter.parsers".filetype_to_parsername
   ft_to_parser.feint = "feint"
   ```

4. Run `nvim` and install the `feint` tree-sitter impementation:

   ```ex
   :TSInstall feint
   ```

[feint]: https://github.com/wylee/feint
[tree-sitter]: https://github.com/tree-sitter/tree-sitter
[tree-sitter CLI]: https://github.com/tree-sitter/tree-sitter/tree/master/cli
[pathogen]: https://github.com/tpope/vim-pathogen
[vim-plug]: https://github.com/junegunn/vim-plug
[nvim-treesitter]: https://github.com/nvim-treesitter/nvim-treesitter
