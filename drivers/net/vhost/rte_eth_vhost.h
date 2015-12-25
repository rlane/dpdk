#ifndef _RTE_ETH_VHOST_H_
#define _RTE_ETH_VHOST_H_

#include <stdint.h>
#include <stdbool.h>

struct rte_eth_vhost_queue_event {
	uint16_t queue_id;
	bool rx;
	bool enable;
};

int rte_eth_vhost_get_queue_event(uint8_t port_id, struct rte_eth_vhost_queue_event *event);

#endif
