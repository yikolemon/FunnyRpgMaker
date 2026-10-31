/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140232be0 */

undefined8 *
FUN_140232be0(undefined8 *param_1,longlong param_2,undefined8 param_3,char *param_4,char *param_5)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  char *pcVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  
joined_r0x000140232c01:
  while( true ) {
    pcVar4 = param_4;
    if (pcVar4 == param_5) {
      *param_1 = param_3;
      return param_1;
    }
    param_4 = pcVar4 + 1;
    if (*pcVar4 == '\\') goto LAB_140232c4f;
    if (*pcVar4 != '&') break;
    puVar1 = *(undefined8 **)(param_2 + 0x10);
    if (*(undefined8 **)(param_2 + 0x18) != puVar1) {
      puVar2 = (undefined1 *)puVar1[1];
      for (puVar7 = (undefined1 *)*puVar1; puVar7 != puVar2; puVar7 = puVar7 + 1) {
        FUN_1402150c2(param_3,*puVar7);
      }
    }
  }
  goto LAB_140232ca4;
LAB_140232c4f:
  if (param_4 != param_5) {
    param_4 = pcVar4 + 2;
    if ((byte)(pcVar4[1] - 0x30U) < 10) {
      uVar5 = (ulonglong)(byte)(pcVar4[1] - 0x30U);
      lVar3 = *(longlong *)(param_2 + 0x10);
      uVar6 = (*(longlong *)(param_2 + 0x18) - lVar3 >> 3) * -0x5555555555555555;
      if (uVar5 <= uVar6 && uVar6 - uVar5 != 0) {
        puVar2 = *(undefined1 **)(lVar3 + 8 + uVar5 * 0x18);
        for (puVar7 = *(undefined1 **)(lVar3 + uVar5 * 0x18); puVar7 != puVar2; puVar7 = puVar7 + 1)
        {
          FUN_1402150c2(param_3,*puVar7);
        }
      }
    }
    else {
LAB_140232ca4:
      FUN_1402150c2(param_3);
    }
  }
  goto joined_r0x000140232c01;
}

