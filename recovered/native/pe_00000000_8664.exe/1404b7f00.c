/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404b7f00 */

undefined4 FUN_1404b7f00(uint param_1,short *param_2,ulonglong param_3,uint param_4,byte param_5)

{
  ulonglong uVar1;
  short *psVar2;
  short sVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  short *psVar8;
  short *psVar9;
  
  if ((param_2 != (short *)0x0) && (param_3 != 0)) {
    *param_2 = 0;
    if (param_3 <= (ulonglong)param_5 + 1) {
      puVar4 = (undefined4 *)FUN_14048fb3c();
      uVar6 = 0x22;
      goto LAB_1404b7f1a;
    }
    if (param_4 - 2 < 0x23) {
      psVar8 = param_2;
      if (param_5 != 0) {
        *param_2 = 0x2d;
        psVar8 = param_2 + 1;
        param_1 = -param_1;
      }
      uVar7 = (ulonglong)(param_5 != 0);
      uVar5 = (ulonglong)param_1;
      psVar2 = psVar8;
      do {
        psVar9 = psVar2;
        uVar1 = uVar5 / param_4;
        uVar5 = uVar5 % (ulonglong)param_4;
        sVar3 = 0x57;
        if ((uint)uVar5 < 10) {
          sVar3 = 0x30;
        }
        uVar7 = uVar7 + 1;
        *psVar9 = sVar3 + (short)uVar5;
      } while (((int)uVar1 != 0) && (uVar5 = uVar1, psVar2 = psVar9 + 1, uVar7 < param_3));
      if (uVar7 < param_3) {
        psVar9[1] = 0;
        do {
          sVar3 = *psVar9;
          *psVar9 = *psVar8;
          psVar9 = psVar9 + -1;
          *psVar8 = sVar3;
          psVar8 = psVar8 + 1;
        } while (psVar8 < psVar9);
        uVar6 = 0;
      }
      else {
        *param_2 = 0;
        puVar4 = (undefined4 *)FUN_14048fb3c();
        *puVar4 = 0x22;
        FUN_1404a1f20();
        uVar6 = 0x22;
      }
      return uVar6;
    }
  }
  puVar4 = (undefined4 *)FUN_14048fb3c();
  uVar6 = 0x16;
LAB_1404b7f1a:
  *puVar4 = uVar6;
  FUN_1404a1f20();
  return uVar6;
}

