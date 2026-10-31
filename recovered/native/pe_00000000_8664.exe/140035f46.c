/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140035f46 */

void FUN_140035f46(undefined8 param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_68 [40];
  undefined1 local_40 [21];
  undefined1 local_2b [3];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  lVar3 = (*(longlong *)(param_2 + 0x18) / 10000000) * -1000000000;
  lVar5 = *(longlong *)(param_2 + 0x18) * 100;
  uVar1 = lVar3 + lVar5;
  uVar4 = lVar3 + lVar5 + 1;
  lVar3 = 0x3f;
  if (uVar4 != 0) {
    for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  uVar2 = (uint)(byte)(&DAT_1401c9dc0)[lVar3] -
          (uint)(uVar1 < *(ulonglong *)
                          (&DAT_1401c9e00 + (ulonglong)(byte)(&DAT_1401c9dc0)[lVar3] * 8));
  if (uVar2 < 9) {
    iVar6 = 9 - uVar2;
    do {
      lVar3 = param_4[1];
      uVar4 = lVar3 + 1;
      if ((ulonglong)param_4[2] < uVar4) {
        (*(code *)param_4[3])(param_4);
        lVar3 = param_4[1];
        uVar4 = lVar3 + 1;
      }
      param_4[1] = uVar4;
      *(undefined1 *)(*param_4 + lVar3) = 0x30;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  local_28 = FUN_14001b11b(local_40,uVar1,0x15);
  FUN_140019fc2(param_4,local_28,local_2b);
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_68);
}

