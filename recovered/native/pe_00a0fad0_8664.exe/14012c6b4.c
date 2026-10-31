/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14012c6b4 */

/* Library Function - Single Match
    __acrt_lowio_ensure_fh_exists
   
   Library: Visual Studio 2019 Release */

longlong __acrt_lowio_ensure_fh_exists(uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 < 0x2000) {
    lVar3 = 0;
    __acrt_lock(7);
    lVar5 = lVar3;
    iVar1 = DAT_1403555e0;
    while (iVar1 <= (int)param_1) {
      if ((&DAT_1403551e0)[lVar5] == 0) {
        lVar4 = __acrt_lowio_create_handle_array();
        (&DAT_1403551e0)[lVar5] = lVar4;
        if (lVar4 == 0) {
          lVar3 = 0xc;
          break;
        }
        iVar1 = DAT_1403555e0 + 0x40;
        DAT_1403555e0 = iVar1;
      }
      lVar5 = lVar5 + 1;
    }
    __acrt_unlock(7);
  }
  else {
    puVar2 = (undefined4 *)FUN_140113dd4();
    *puVar2 = 9;
    FUN_140120ee8();
    lVar3 = 9;
  }
  return lVar3;
}

