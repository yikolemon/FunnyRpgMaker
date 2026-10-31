/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140043d68 */

void FUN_140043d68(undefined8 *param_1,ulonglong param_2)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  
  if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140043d9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x30);
    return;
  }
  if (param_2 < 10) {
    lVar6 = (longlong)param_1 + 0x11;
    uVar3 = 1;
  }
  else {
    uVar4 = param_2;
    uVar2 = 4;
    do {
      uVar5 = uVar2;
      if (uVar4 < 100) {
        uVar5 = uVar5 - 2;
        goto LAB_140043df1;
      }
      if (uVar4 < 1000) {
        uVar5 = uVar5 - 1;
        goto LAB_140043df1;
      }
      if (uVar4 < 10000) goto LAB_140043df1;
      bVar1 = 99999 < uVar4;
      uVar4 = uVar4 / 10000;
      uVar2 = uVar5 + 4;
    } while (bVar1);
    uVar5 = uVar5 + 1;
LAB_140043df1:
    uVar3 = (ulonglong)uVar5;
    lVar6 = (longlong)(param_1 + 2) + uVar3;
    uVar4 = param_2;
    if (99 < param_2) {
      do {
        param_2 = uVar4 / 100;
        *(undefined2 *)(lVar6 + -2) =
             *(undefined2 *)
              (&DAT_1401cdb00 + (ulonglong)(uint)((int)uVar4 + (int)param_2 * -100) * 2);
        lVar6 = lVar6 + -2;
        bVar1 = 9999 < uVar4;
        uVar4 = param_2;
      } while (bVar1);
    }
    if (9 < param_2) {
      *(undefined2 *)(lVar6 + -2) = *(undefined2 *)(&DAT_1401cdb00 + param_2 * 2);
      goto LAB_140043e5f;
    }
  }
  *(byte *)(lVar6 + -1) = (byte)param_2 | 0x30;
LAB_140043e5f:
                    /* WARNING: Could not recover jumptable at 0x000140043e6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,param_1 + 2,uVar3);
  return;
}

