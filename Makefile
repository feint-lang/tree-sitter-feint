.PHONY := test
test:
	FEINT_TREE_SITTER_DEBUG=1 tree-sitter test

.PHONY := nvim-install
nvim-install:
	nvim -e -c 'TSInstall feint' -c 'sleep 1' -c 'q'

.PHONY := nvim-uninstall
nvim-uninstall:
	nvim -e -c 'TSUninstall feint' -c 'sleep 1' -c 'q'
