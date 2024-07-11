/* Upstream source:
 * https://github.com/torvalds/linux/blob/master/drivers/net/wireless/virtual/mac80211_hwsim.h
 */

#ifndef __LINUX_MAC80211_HWSIM_H
#define __LINUX_MAC80211_HWSIM_H

#include <stdint.h>
#include <linux/nl80211.h>

enum hwsim_commands {
	HWSIM_CMD_OFFSET = NL80211_CMD_MAX,
	HWSIM_CMD_REGISTER,
	HWSIM_CMD_FRAME,
	HWSIM_CMD_TX_INFO_FRAME,
	HWSIM_CMD_NEW_RADIO,
	HWSIM_CMD_DEL_RADIO,
	HWSIM_CMD_GET_RADIO,
	HWSIM_CMD_ADD_MAC_ADDR,
	HWSIM_CMD_DEL_MAC_ADDR,
	HWSIM_CMD_START_PMSR,
	HWSIM_CMD_ABORT_PMSR,
	HWSIM_CMD_REPORT_PMSR,
};

enum hwsim_attrs {
	HWSIM_ATTR_UNSPEC,
	HWSIM_ATTR_ADDR_RECEIVER,
	HWSIM_ATTR_ADDR_TRANSMITTER,
	HWSIM_ATTR_FRAME,
	HWSIM_ATTR_FLAGS,
	HWSIM_ATTR_RX_RATE,
	HWSIM_ATTR_SIGNAL,
	HWSIM_ATTR_TX_INFO,
	HWSIM_ATTR_COOKIE,
	HWSIM_ATTR_CHANNELS,
	HWSIM_ATTR_RADIO_ID,
	HWSIM_ATTR_REG_HINT_ALPHA2,
	HWSIM_ATTR_REG_CUSTOM_REG,
	HWSIM_ATTR_REG_STRICT_REG,
	HWSIM_ATTR_SUPPORT_P2P_DEVICE,
	HWSIM_ATTR_USE_CHANCTX,
	HWSIM_ATTR_DESTROY_RADIO_ON_CLOSE,
	HWSIM_ATTR_RADIO_NAME,
	HWSIM_ATTR_NO_VIF,
	HWSIM_ATTR_FREQ,
	HWSIM_ATTR_PAD,
	HWSIM_ATTR_TX_INFO_FLAGS,
	HWSIM_ATTR_PERM_ADDR,
	HWSIM_ATTR_IFTYPE_SUPPORT,
	HWSIM_ATTR_CIPHER_SUPPORT,
	HWSIM_ATTR_MLO_SUPPORT,
	HWSIM_ATTR_PMSR_SUPPORT,
	HWSIM_ATTR_PMSR_REQUEST,
	HWSIM_ATTR_PMSR_RESULT,
};

enum hwsim_rate_info_attributes {
	HWSIM_RATE_INFO_ATTR_UNSPEC,
	HWSIM_RATE_INFO_ATTR_FLAGS,
	HWSIM_RATE_INFO_ATTR_MCS,
	HWSIM_RATE_INFO_ATTR_LEGACY,
	HWSIM_RATE_INFO_ATTR_NSS,
	HWSIM_RATE_INFO_ATTR_BW,
	HWSIM_RATE_INFO_ATTR_HE_GI,
	HWSIM_RATE_INFO_ATTR_HE_DCM,
	HWSIM_RATE_INFO_ATTR_HE_RU_ALLOC,
	HWSIM_RATE_INFO_ATTR_N_BOUNDED_CH,
	HWSIM_RATE_INFO_ATTR_EHT_GI,
	HWSIM_RATE_INFO_ATTR_EHT_RU_ALLOC,
};

struct hwsim_tx_rate {
	int8_t idx;
	uint8_t count;
} __attribute__((packed));

struct hwsim_tx_rate_flag {
	int8_t idx;
	uint16_t flags;
} __attribute__((packed));

#endif /* __LINUX_MAC80211_HWSIM_H */
