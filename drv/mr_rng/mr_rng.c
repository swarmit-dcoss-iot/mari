/**
 * @file
 * @ingroup bsp_rng
 *
 * @brief  definition of the "rng" module.
 *
 * @author Anonymous Anon <anonymous.anon@anon.org>
 *
 * @copyright Anon, 2023
 */

#if defined(NRF5340_XXAA) && defined(NRF_APPLICATION)
#include "mr_rng_nrf5340_app.c"
#else
#include "mr_rng_default.c"
#endif
