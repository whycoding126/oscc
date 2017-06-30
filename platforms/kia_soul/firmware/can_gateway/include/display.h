/**
 * @file display.h
 * @brief Display functionality.
 *
 */


#ifndef _OSCC_KIA_SOUL_CAN_GATEWAY_DISPLAY_H_
#define _OSCC_KIA_SOUL_CAN_GATEWAY_DISPLAY_H_


/**
 * @brief Enumeration of possible screens.
 *
 */
typedef enum
{
    STATUS_SCREEN,
    ERROR_SCREEN,
    SCREEN_COUNT
} screen_t;


/**
 * @brief Enumeration of possible gateway statuses.
 *
 */
typedef enum
{
    GATEWAY_STATUS_UNKNOWN,
    GATEWAY_STATUS_GOOD,
    GATEWAY_STATUS_WARNING,
    GATEWAY_STATUS_ERROR
} gateway_status_t;


/**
 * @brief Enumeration of possible module statuses.
 *
 */
typedef enum
{
    MODULE_STATUS_UNKNOWN,
    MODULE_STATUS_ENABLED,
    MODULE_STATUS_DISABLED,
    MODULE_STATUS_ERROR,
} module_status_t;


/**
 * @brief Current status screen state.
 *
 */
typedef struct
{
    gateway_status_t gateway;
    module_status_t brakes;
    module_status_t steering;
    module_status_t throttle;
} status_screen_s;


/**
 * @brief Current error screen state.
 *
 */
typedef struct
{

} error_screen_s;


/**
 * @brief Current display state.
 *
 */
typedef struct
{
    screen_t current_screen;
    status_screen_s status_screen;
    error_screen_s error_screen;
} kia_soul_gateway_display_state_s;


// ****************************************************************************
// Function:    update_display
//
// Purpose:     Updates the display with new information.
//
// Returns:     void
//
// Parameters:  void
//
// ****************************************************************************
void update_display( void );


#endif /* _OSCC_KIA_SOUL_CAN_GATEWAY_DISPLAY_H_ */