/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404af5dc */

undefined4 FUN_1404af5dc(uint param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  bool bVar1;
  undefined4 uVar2;
  
  if (param_1 == 0xfffffffe) {
    *(undefined1 *)(param_4 + 0x38) = 1;
    *(undefined4 *)(param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 9;
  }
  else {
    if (((int)param_1 < 0) || (DAT_140632cd0 <= param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if ((*(byte *)((&DAT_1406328d0)[(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        __acrt_lowio_lock_fh(param_1);
        uVar2 = 0xffffffff;
        if ((*(byte *)((&DAT_1406328d0)[(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 1) == 0) {
          *(undefined1 *)(param_4 + 0x30) = 1;
          *(undefined4 *)(param_4 + 0x2c) = 9;
          *(undefined1 *)(param_4 + 0x38) = 1;
          *(undefined4 *)(param_4 + 0x34) = 0;
        }
        else {
          uVar2 = FUN_1404af2ac(param_1,param_2,param_3,param_4);
        }
        __acrt_lowio_unlock_fh(param_1);
        return uVar2;
      }
    }
    *(undefined1 *)(param_4 + 0x38) = 1;
    *(undefined4 *)(param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 9;
    FUN_1404a2100(0,0,0,0,0,param_4);
  }
  return 0xffffffff;
}

