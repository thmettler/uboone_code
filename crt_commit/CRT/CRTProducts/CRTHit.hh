/**
 * \class CRTData
 *
 * \ingroup crt
 *
 * \brief CRT Hit Info
 *
 * \author $Author: David Lorca $
 *
 */


#ifndef CRTHit_hh_
#define CRTHit_hh_

#include <cstdint>
#include <vector>
#include <map>

namespace crt {

    struct CRTHit{
      std::vector<uint8_t> feb_id; // crt module mac address
      std::map< uint8_t, std::vector<std::pair<int,double> > > pesmap;
      double peshit;
     
      uint32_t ts0_s; // time stamp in GPS
      uint16_t ts0_s_err;
      uint32_t ts0_ns;
      uint16_t ts0_ns_err;

      uint32_t ts0_s_corr;
      uint16_t ts0_s_err_corr;
      uint32_t ts0_ns_corr;
      uint16_t ts0_ns_err_corr;

      int32_t ts1_ns; // timestamp related to the beam trigger
      uint16_t ts1_ns_err;

      int32_t ts1_ns_corr;
      uint16_t ts1_ns_err_corr;

      int plane; // which plane (Bottom, Pipeside, Feedthrough, Top)
      double x_pos; // postion + errors in TPC coordinated system
      double x_err;
      double y_pos;
      double y_err;
      double z_pos;
      double z_err;
      
      uint16_t event_flag; // flags
      std::map< uint8_t, uint16_t > lostcpu_map;
      std::map< uint8_t, uint16_t > lostfpga_map;
      uint16_t pollms;

      CRTHit() {}

    };


}

#endif
