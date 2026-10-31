/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400dfb8e */

void FUN_1400dfb8e(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  uint local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  if (0xffffff < param_7) {
    if ((param_2[1] != *(longlong *)(param_1 + 0x78)) || (*param_2 != *(longlong *)(param_1 + 0x70))
       ) {
      local_48 = (undefined4)*param_2;
      uStack_44 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_40 = (undefined4)param_2[1];
      uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
      FUN_1400dad02(param_1);
      FUN_1400dae70(param_1,6,4);
      local_50 = param_7;
      local_58 = param_6;
      FUN_1400db0ac(param_1,param_3,param_4,param_5);
      if (DAT_140f17b40 == (local_38 ^ (ulonglong)auStack_78)) {
        FUN_1400dadbc(param_1);
        return;
      }
      goto LAB_1400dfc9a;
    }
    FUN_1400dae70(param_1,6,4);
    local_50 = param_7;
    local_58 = param_6;
    FUN_1400db0ac(param_1,param_3,param_4,param_5);
  }
  if (DAT_140f17b40 == (local_38 ^ (ulonglong)auStack_78)) {
    return;
  }
LAB_1400dfc9a:
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_38 ^ (ulonglong)auStack_78);
}

