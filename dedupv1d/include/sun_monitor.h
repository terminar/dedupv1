/*
 * dedupv1 - iSCSI based Deduplication System for Linux
 *
 * (C) 2008 Dirk Meister
 * (C) 2009 - 2011, Dirk Meister, Paderborn Center for Parallel Computing
 * (C) 2012 Dirk Meister, Johannes Gutenberg University Mainz
 *
 * This file is part of dedupv1.
 *
 * dedupv1 is free software: you can redistribute it and/or modify it under the terms of the
 * GNU General Public License as published by the Free Software Foundation, either version 3
 * of the License, or (at your option) any later version.
 *
 * dedupv1 is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without
 * even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with dedupv1. If not, see http://www.gnu.org/licenses/.
 */

#ifndef SUN_MONITOR_H_
#define SUN_MONITOR_H_


#include <core/dedup.h>

#include <stdint.h>

#include "default_monitor.h"
#include "dedupv1d.h"

namespace dedupv1d {
namespace monitor {

/**
 * Monitor to show the sun state
 *
 * \ingroup monitor
 */
class SunMonitorAdapter : public DefaultMonitorAdapter {
    public:
    /**
     * Constructor
     * @param ds
     * @return
     */
    explicit SunMonitorAdapter();

    /**
     * Executes the gc monitor
     * @return
     */
    std::string Monitor();
};

}
}


#endif /* MONITOR_MONITOR_H_ */
