/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140035e2a */

void FUN_140035e2a(undefined8 param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [40];
  undefined1 local_40 [21];
  undefined1 local_2b [3];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_2 + 0x18);
  uVar5 = lVar2 / 10 + (lVar2 / 10000000) * -1000000 + (lVar2 / -0x6769800000000000) * 1000000;
  lVar2 = 0x3f;
  if ((uVar5 | 1) != 0) {
    for (; (uVar5 | 1) >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar1 = (uint)(byte)(&DAT_1401c9dc0)[lVar2] -
          (uint)(uVar5 < *(ulonglong *)
                          (&DAT_1401c9e00 + (ulonglong)(byte)(&DAT_1401c9dc0)[lVar2] * 8));
  if (uVar1 < 6) {
    iVar4 = 6 - uVar1;
    do {
      lVar2 = param_4[1];
      uVar3 = lVar2 + 1;
      if ((ulonglong)param_4[2] < uVar3) {
        (*(code *)param_4[3])(param_4);
        lVar2 = param_4[1];
        uVar3 = lVar2 + 1;
      }
      param_4[1] = uVar3;
      *(undefined1 *)(*param_4 + lVar2) = 0x30;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_28 = FUN_14001b11b(local_40,uVar5,0x15);
  FUN_140019fc2(param_4,local_28,local_2b);
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_68);
}

