/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14006481a */

undefined8 *
FUN_14006481a(undefined8 *param_1,longlong param_2,undefined8 param_3,short *param_4,short *param_5)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong lVar3;
  short *psVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  
joined_r0x00014006483b:
  while( true ) {
    psVar4 = param_4;
    if (psVar4 == param_5) {
      *param_1 = param_3;
      return param_1;
    }
    param_4 = psVar4 + 1;
    if (*psVar4 == 0x5c) goto LAB_140064893;
    if (*psVar4 != 0x26) break;
    puVar1 = *(undefined8 **)(param_2 + 0x10);
    if (*(undefined8 **)(param_2 + 0x18) != puVar1) {
      puVar2 = (undefined2 *)puVar1[1];
      for (puVar7 = (undefined2 *)*puVar1; puVar7 != puVar2; puVar7 = puVar7 + 1) {
        FUN_1400168f8(param_3,*puVar7);
      }
    }
  }
  goto LAB_1400648f2;
LAB_140064893:
  if (param_4 != param_5) {
    param_4 = psVar4 + 2;
    if ((ushort)(psVar4[1] - 0x30U) < 10) {
      uVar5 = (ulonglong)((ushort)psVar4[1] & 0xf);
      lVar3 = *(longlong *)(param_2 + 0x10);
      uVar6 = (*(longlong *)(param_2 + 0x18) - lVar3 >> 3) * -0x5555555555555555;
      if (uVar5 <= uVar6 && uVar6 - uVar5 != 0) {
        puVar2 = *(undefined2 **)(lVar3 + 8 + uVar5 * 0x18);
        for (puVar7 = *(undefined2 **)(lVar3 + uVar5 * 0x18); puVar7 != puVar2; puVar7 = puVar7 + 1)
        {
          FUN_1400168f8(param_3,*puVar7);
        }
      }
    }
    else {
LAB_1400648f2:
      FUN_1400168f8(param_3);
    }
  }
  goto joined_r0x00014006483b;
}

