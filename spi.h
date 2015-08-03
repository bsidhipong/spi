/*  Copyright (c) 2015 B. Sidhipong <bsidhipong@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>. */

#ifndef __SPI_H__
#define __SPI_H__
#include <avr/common.h>

#ifdef __cplusplus
extern "C" {
#endif

void spi_master_init( void );
void spi_bulk_send( uint8_t *send_buffer, uint8_t count );
inline void spi_send( uint8_t send_data );
void spi_bulk_exchange( uint8_t *send_buffer, uint8_t *receive_buffer, uint8_t count );
inline uint8_t spi_exchange( uint8_t send_data );

#ifdef __cplusplus
}
#endif

#endif /* __SPI_H__ */
