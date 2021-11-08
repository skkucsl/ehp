# Efficient Hybrid Polling (EHP)

This is the source code repository for the paper entitled "Efficient Hybrid Polling for Ultra-Low Latency Storage Devices"

## How to use

* Enable `CONFIG_EHP` (set to y).
* Set `/sys/block/"NVMe_device"/queue/io_poll` to 1 and `/sys/block/"NVMe_device"/queue/io_poll_delay` to -2.

## Note

* Parameters for sleep time prediction should be recalibrated as the system configuration changes.
* The current implementation also supports configuring `Interrupt`, `Polling` and `Hybrid polling` with (io_poll, io_poll_delay) pair ((0,0), (1,-1), (1,0) in turn).
