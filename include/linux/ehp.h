#ifndef _EHP_H
#define _EHP_H

struct ehp_iostat {
	unsigned long long sleep_start_time, sleep_end_time;
	unsigned long long poll_start_time, poll_end_time;
	unsigned long long device_start_time, device_end_time;
	unsigned long original_sleep_time;
	int iothread;
	int ongoing;
};

extern struct ehp_iostat ehp_iostat;

#define TARGET_CORE 1

#endif
