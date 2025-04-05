include $(APPDIR)/Make.defs

# MyApp built-in application info

PROGNAME  = $(CONFIG_EXAMPLES_MYAPP_PROGNAME)
PRIORITY  = $(CONFIG_EXAMPLES_MYAPP_PRIORITY)
STACKSIZE = $(CONFIG_EXAMPLES_MYAPP_STACKSIZE)
MODULE    = $(CONFIG_EXAMPLES_MYAPP)

# MyApp Example

MAINSRC = myapp_main.c

# Build with WebAssembly when CONFIG_INTERPRETERS_WAMR is enabled

WASM_BUILD = both

# Mode of WebAssembly Micro Runtime

WAMR_MODE  = AOT

include $(APPDIR)/Application.mk
