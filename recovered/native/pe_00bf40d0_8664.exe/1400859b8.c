/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400859b8 */

ulonglong FUN_1400859b8(longlong *param_1,uint param_2,longlong param_3,uint param_4)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x21e);
  uVar1 = uVar4 - param_2;
  if (uVar4 < param_2 || uVar1 == 0) {
LAB_140085a04:
    if (param_2 < uVar4 || param_2 - uVar4 == 0) {
LAB_140085a30:
      if (param_4 == 0) goto LAB_140085a7f;
    }
    else {
      uVar3 = FUN_140085ad8((longlong)param_1,param_2 - uVar4);
      uVar4 = 0;
      if ((param_4 == 0) || ((int)uVar3 != 0)) goto LAB_140085a81;
    }
    uVar4 = 0;
    do {
      uVar1 = (int)param_1[0x220] - (int)(undefined8 *)param_1[0x21f];
      if (param_4 < uVar1) {
        uVar1 = param_4;
      }
      FUN_1400b3550((undefined8 *)((ulonglong)uVar4 + param_3),(undefined8 *)param_1[0x21f],
                    (ulonglong)uVar1);
      uVar4 = uVar4 + uVar1;
      param_1[0x21f] = param_1[0x21f] + (ulonglong)uVar1;
      *(uint *)(param_1 + 0x21e) = (int)param_1[0x21e] + uVar1;
      param_4 = param_4 - uVar1;
    } while ((param_4 != 0) && (uVar3 = FUN_140085b53((longlong)param_1), (int)uVar3 == 0));
  }
  else {
    if (uVar1 <= ((int)param_1[0x21f] - (int)param_1) - 0xf0U) {
      param_1[0x21f] = param_1[0x21f] - (ulonglong)uVar1;
      *(uint *)(param_1 + 0x21e) = param_2;
      goto LAB_140085a30;
    }
    uVar2 = FUN_140085a8e(param_1);
    if ((int)uVar2 == 0) {
      uVar4 = *(uint *)(param_1 + 0x21e);
      goto LAB_140085a04;
    }
LAB_140085a7f:
    uVar4 = 0;
  }
LAB_140085a81:
  return (ulonglong)uVar4;
}

