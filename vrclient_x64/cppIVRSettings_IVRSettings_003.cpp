/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS IVRSettings_IVRSettings_003_GetSettingsErrorNameFromEnum( void *args )
{
    struct IVRSettings_IVRSettings_003_GetSettingsErrorNameFromEnum_params *params = (struct IVRSettings_IVRSettings_003_GetSettingsErrorNameFromEnum_params *)args;
    struct u_IVRSettings_IVRSettings_003 *iface = (struct u_IVRSettings_IVRSettings_003 *)params->u_iface;
    params->_ret = iface->GetSettingsErrorNameFromEnum( params->eError );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSettings_IVRSettings_003_GetSettingsErrorNameFromEnum( void *args )
{
    struct wow64_IVRSettings_IVRSettings_003_GetSettingsErrorNameFromEnum_params *params = (struct wow64_IVRSettings_IVRSettings_003_GetSettingsErrorNameFromEnum_params *)args;
    struct u_IVRSettings_IVRSettings_003 *iface = (struct u_IVRSettings_IVRSettings_003 *)params->u_iface;
    params->_ret = iface->GetSettingsErrorNameFromEnum( params->eError );
    return 0;
}
#endif

NTSTATUS IVRSettings_IVRSettings_003_SetBool( void *args )
{
    struct IVRSettings_IVRSettings_003_SetBool_params *params = (struct IVRSettings_IVRSettings_003_SetBool_params *)args;
    struct u_IVRSettings_IVRSettings_003 *iface = (struct u_IVRSettings_IVRSettings_003 *)params->u_iface;
    iface->SetBool( params->pchSection, params->pchSettingsKey, params->bValue, params->peError );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSettings_IVRSettings_003_SetBool( void *args )
{
    struct wow64_IVRSettings_IVRSettings_003_SetBool_params *params = (struct wow64_IVRSettings_IVRSettings_003_SetBool_params *)args;
    struct u_IVRSettings_IVRSettings_003 *iface = (struct u_IVRSettings_IVRSettings_003 *)params->u_iface;
    iface->SetBool( params->pchSection, params->pchSettingsKey, params->bValue, params->peError );
    return 0;
}
#endif

NTSTATUS IVRSettings_IVRSettings_003_SetInt32( void *args )
{
    struct IVRSettings_IVRSettings_003_SetInt32_params *params = (struct IVRSettings_IVRSettings_003_SetInt32_params *)args;
    struct u_IVRSettings_IVRSettings_003 *iface = (struct u_IVRSettings_IVRSettings_003 *)params->u_iface;
    iface->SetInt32( params->pchSection, params->pchSettingsKey, params->nValue, params->peError );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSettings_IVRSettings_003_SetInt32( void *args )
{
    struct wow64_IVRSettings_IVRSettings_003_SetInt32_params *params = (struct wow64_IVRSettings_IVRSettings_003_SetInt32_params *)args;
    struct u_IVRSettings_IVRSettings_003 *iface = (struct u_IVRSettings_IVRSettings_003 *)params->u_iface;
    iface->SetInt32( params->pchSection, params->pchSettingsKey, params->nValue, params->peError );
    return 0;
}
#endif

NTSTATUS IVRSettings_IVRSettings_003_SetFloat( void *args )
{
    struct IVRSettings_IVRSettings_003_SetFloat_params *params = (struct IVRSettings_IVRSettings_003_SetFloat_params *)args;
    struct u_IVRSettings_IVRSettings_003 *iface = (struct u_IVRSettings_IVRSettings_003 *)params->u_iface;
    iface->SetFloat( params->pchSection, params->pchSettingsKey, params->flValue, params->peError );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSettings_IVRSettings_003_SetFloat( void *args )
{
    struct wow64_IVRSettings_IVRSettings_003_SetFloat_params *params = (struct wow64_IVRSettings_IVRSettings_003_SetFloat_params *)args;
    struct u_IVRSettings_IVRSettings_003 *iface = (struct u_IVRSettings_IVRSettings_003 *)params->u_iface;
    iface->SetFloat( params->pchSection, params->pchSettingsKey, params->flValue, params->peError );
    return 0;
}
#endif

NTSTATUS IVRSettings_IVRSettings_003_SetString( void *args )
{
    struct IVRSettings_IVRSettings_003_SetString_params *params = (struct IVRSettings_IVRSettings_003_SetString_params *)args;
    struct u_IVRSettings_IVRSettings_003 *iface = (struct u_IVRSettings_IVRSettings_003 *)params->u_iface;
    iface->SetString( params->pchSection, params->pchSettingsKey, params->pchValue, params->peError );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSettings_IVRSettings_003_SetString( void *args )
{
    struct wow64_IVRSettings_IVRSettings_003_SetString_params *params = (struct wow64_IVRSettings_IVRSettings_003_SetString_params *)args;
    struct u_IVRSettings_IVRSettings_003 *iface = (struct u_IVRSettings_IVRSettings_003 *)params->u_iface;
    iface->SetString( params->pchSection, params->pchSettingsKey, params->pchValue, params->peError );
    return 0;
}
#endif

NTSTATUS IVRSettings_IVRSettings_003_GetBool( void *args )
{
    struct IVRSettings_IVRSettings_003_GetBool_params *params = (struct IVRSettings_IVRSettings_003_GetBool_params *)args;
    struct u_IVRSettings_IVRSettings_003 *iface = (struct u_IVRSettings_IVRSettings_003 *)params->u_iface;
    params->_ret = iface->GetBool( params->pchSection, params->pchSettingsKey, params->peError );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSettings_IVRSettings_003_GetBool( void *args )
{
    struct wow64_IVRSettings_IVRSettings_003_GetBool_params *params = (struct wow64_IVRSettings_IVRSettings_003_GetBool_params *)args;
    struct u_IVRSettings_IVRSettings_003 *iface = (struct u_IVRSettings_IVRSettings_003 *)params->u_iface;
    params->_ret = iface->GetBool( params->pchSection, params->pchSettingsKey, params->peError );
    return 0;
}
#endif

NTSTATUS IVRSettings_IVRSettings_003_GetInt32( void *args )
{
    struct IVRSettings_IVRSettings_003_GetInt32_params *params = (struct IVRSettings_IVRSettings_003_GetInt32_params *)args;
    struct u_IVRSettings_IVRSettings_003 *iface = (struct u_IVRSettings_IVRSettings_003 *)params->u_iface;
    params->_ret = iface->GetInt32( params->pchSection, params->pchSettingsKey, params->peError );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSettings_IVRSettings_003_GetInt32( void *args )
{
    struct wow64_IVRSettings_IVRSettings_003_GetInt32_params *params = (struct wow64_IVRSettings_IVRSettings_003_GetInt32_params *)args;
    struct u_IVRSettings_IVRSettings_003 *iface = (struct u_IVRSettings_IVRSettings_003 *)params->u_iface;
    params->_ret = iface->GetInt32( params->pchSection, params->pchSettingsKey, params->peError );
    return 0;
}
#endif

NTSTATUS IVRSettings_IVRSettings_003_GetFloat( void *args )
{
    struct IVRSettings_IVRSettings_003_GetFloat_params *params = (struct IVRSettings_IVRSettings_003_GetFloat_params *)args;
    struct u_IVRSettings_IVRSettings_003 *iface = (struct u_IVRSettings_IVRSettings_003 *)params->u_iface;
    params->_ret = iface->GetFloat( params->pchSection, params->pchSettingsKey, params->peError );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSettings_IVRSettings_003_GetFloat( void *args )
{
    struct wow64_IVRSettings_IVRSettings_003_GetFloat_params *params = (struct wow64_IVRSettings_IVRSettings_003_GetFloat_params *)args;
    struct u_IVRSettings_IVRSettings_003 *iface = (struct u_IVRSettings_IVRSettings_003 *)params->u_iface;
    params->_ret = iface->GetFloat( params->pchSection, params->pchSettingsKey, params->peError );
    return 0;
}
#endif

NTSTATUS IVRSettings_IVRSettings_003_GetString( void *args )
{
    struct IVRSettings_IVRSettings_003_GetString_params *params = (struct IVRSettings_IVRSettings_003_GetString_params *)args;
    struct u_IVRSettings_IVRSettings_003 *iface = (struct u_IVRSettings_IVRSettings_003 *)params->u_iface;
    iface->GetString( params->pchSection, params->pchSettingsKey, params->pchValue, params->unValueLen, params->peError );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSettings_IVRSettings_003_GetString( void *args )
{
    struct wow64_IVRSettings_IVRSettings_003_GetString_params *params = (struct wow64_IVRSettings_IVRSettings_003_GetString_params *)args;
    struct u_IVRSettings_IVRSettings_003 *iface = (struct u_IVRSettings_IVRSettings_003 *)params->u_iface;
    iface->GetString( params->pchSection, params->pchSettingsKey, params->pchValue, params->unValueLen, params->peError );
    return 0;
}
#endif

NTSTATUS IVRSettings_IVRSettings_003_RemoveSection( void *args )
{
    struct IVRSettings_IVRSettings_003_RemoveSection_params *params = (struct IVRSettings_IVRSettings_003_RemoveSection_params *)args;
    struct u_IVRSettings_IVRSettings_003 *iface = (struct u_IVRSettings_IVRSettings_003 *)params->u_iface;
    iface->RemoveSection( params->pchSection, params->peError );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSettings_IVRSettings_003_RemoveSection( void *args )
{
    struct wow64_IVRSettings_IVRSettings_003_RemoveSection_params *params = (struct wow64_IVRSettings_IVRSettings_003_RemoveSection_params *)args;
    struct u_IVRSettings_IVRSettings_003 *iface = (struct u_IVRSettings_IVRSettings_003 *)params->u_iface;
    iface->RemoveSection( params->pchSection, params->peError );
    return 0;
}
#endif

NTSTATUS IVRSettings_IVRSettings_003_RemoveKeyInSection( void *args )
{
    struct IVRSettings_IVRSettings_003_RemoveKeyInSection_params *params = (struct IVRSettings_IVRSettings_003_RemoveKeyInSection_params *)args;
    struct u_IVRSettings_IVRSettings_003 *iface = (struct u_IVRSettings_IVRSettings_003 *)params->u_iface;
    iface->RemoveKeyInSection( params->pchSection, params->pchSettingsKey, params->peError );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSettings_IVRSettings_003_RemoveKeyInSection( void *args )
{
    struct wow64_IVRSettings_IVRSettings_003_RemoveKeyInSection_params *params = (struct wow64_IVRSettings_IVRSettings_003_RemoveKeyInSection_params *)args;
    struct u_IVRSettings_IVRSettings_003 *iface = (struct u_IVRSettings_IVRSettings_003 *)params->u_iface;
    iface->RemoveKeyInSection( params->pchSection, params->pchSettingsKey, params->peError );
    return 0;
}
#endif

