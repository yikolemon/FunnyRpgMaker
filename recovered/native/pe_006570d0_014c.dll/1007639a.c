/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007639a */

undefined1 __thiscall
FUN_1007639a(int param_1,undefined4 *param_2,int param_3,undefined2 *param_4,int *param_5,
            int param_6,int param_7,int *param_8)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 uVar4;
  undefined4 local_24;
  int local_20;
  undefined1 local_19 [5];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_24;
  *param_5 = param_3;
  *param_8 = param_6;
  puVar2 = (undefined2 *)*param_5;
  puVar3 = param_4;
  if (puVar2 != param_4) {
    local_20 = param_1 + 8;
    do {
      puVar3 = puVar2;
      if (param_6 == param_7) break;
      if (param_7 - param_6 < 5) {
        local_24 = *param_2;
        uVar1 = param_2[1];
        param_6 = FUN_1022c060(local_19,*puVar2,param_2,local_20);
        if (param_6 < 0) goto LAB_10076477;
        if (param_7 - *param_8 < param_6) {
          *param_2 = local_24;
          param_2[1] = uVar1;
          puVar3 = (undefined2 *)*param_5;
          break;
        }
        FUN_1025b2d0(*param_8,local_19,param_6);
        *param_5 = *param_5 + 2;
        param_6 = param_6 + *param_8;
        *param_8 = param_6;
      }
      else {
        param_6 = FUN_1022c060(param_6,*puVar2,param_2,local_20);
        if (param_6 < 0) {
LAB_10076477:
          uVar4 = 2;
          goto LAB_10076497;
        }
        *param_5 = *param_5 + 2;
        param_6 = param_6 + *param_8;
        *param_8 = param_6;
      }
      puVar2 = (undefined2 *)*param_5;
      puVar3 = param_4;
    } while (puVar2 != param_4);
  }
  uVar4 = puVar3 != param_4;
LAB_10076497:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return uVar4;
}

