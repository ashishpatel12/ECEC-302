# THIS FILE IS AUTOMATICALLY GENERATED
# Project: C:\Users\Gary\Documents\PSoC Creator\Workspace01\Lab 2a.cydsn\Lab 2a.cyprj
# Date: Thu, 14 Jan 2016 20:37:48 GMT
#set_units -time ns
create_clock -name {CyRouted1} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/dsi_in_0}]]
create_clock -name {CyILO} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/ilo}]]
create_clock -name {CyLFCLK} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/lfclk}]]
create_clock -name {CyIMO} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyHFCLK} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/hfclk}]]
create_clock -name {CySYSCLK} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/sysclk}]]
create_generated_clock -name {UART_1_IntClock} -source [get_pins {ClockBlock/hfclk}] -edges {1 313 627} [list [get_pins {ClockBlock/udb_div_0}]]


# Component constraints for C:\Users\Gary\Documents\PSoC Creator\Workspace01\Lab 2a.cydsn\TopDesign\TopDesign.cysch
# Project: C:\Users\Gary\Documents\PSoC Creator\Workspace01\Lab 2a.cydsn\Lab 2a.cyprj
# Date: Thu, 14 Jan 2016 20:37:44 GMT