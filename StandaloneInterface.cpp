// ----------------------------------------------------------------------------
// StandaloneInterface.cpp
//
//
// Authors:
// Peter Polidoro polidorop@janelia.hhmi.org
// ----------------------------------------------------------------------------
#include "StandaloneInterface.h"


namespace Standalone
{
StandaloneInterface::StandaloneInterface(HardwareSerial &serial,
                                         const int enc_a_pin,
                                         const int enc_b_pin,
                                         const int enc_btn_pin,
                                         const int enc_btn_int,
                                         const int btn_pin,
                                         const int btn_int,
                                         const int led_pwr_pin,
                                         const int update_period) :
  server_(serial,
          enc_a_pin,
          enc_b_pin,
          enc_btn_pin,
          enc_btn_int,
          btn_pin,
          btn_int,
          led_pwr_pin,
          update_period)
{
}

void StandaloneInterface::setup(int frame_count)
{
  server_.setup(frame_count);
}

void StandaloneInterface::enable()
{
  server_.enable();
}

void StandaloneInterface::disable()
{
  server_.disable();
}

void StandaloneInterface::update()
{
  server_.update();
}

DisplayLabel& StandaloneInterface::createDisplayLabel()
{
  return server_.createDisplayLabel();
}

DisplayVariable& StandaloneInterface::createDisplayVariable()
{
  return server_.createDisplayVariable();
}

InteractiveVariable& StandaloneInterface::createInteractiveVariable()
{
  return server_.createInteractiveVariable();
}
}
