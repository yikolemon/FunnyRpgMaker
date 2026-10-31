/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400320f6 */

void FUN_1400320f6(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [40];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(param_2 + 0x18);
  FUN_140030a1c(local_58,6,param_1 + 8);
  uVar4 = lVar1 / 10 + (lVar1 / 10000000) * -1000000 + (lVar1 / -0x6769800000000000) * 1000000;
  lVar1 = 0x3f;
  if ((uVar4 | 1) != 0) {
    for (; (uVar4 | 1) >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  uVar3 = (uint)(byte)(&DAT_1401c9dc0)[lVar1] -
          (uint)(uVar4 < *(ulonglong *)
                          (&DAT_1401c9e00 + (ulonglong)(byte)(&DAT_1401c9dc0)[lVar1] * 8));
  if (uVar3 < 6) {
    do {
      lVar1 = param_4[1];
      uVar2 = lVar1 + 1;
      if ((ulonglong)param_4[2] < uVar2) {
        (*(code *)param_4[3])(param_4);
        lVar1 = param_4[1];
        uVar2 = lVar1 + 1;
      }
      param_4[1] = uVar2;
      *(undefined1 *)(*param_4 + lVar1) = 0x30;
      uVar3 = uVar3 + 1;
    } while (uVar3 != 6);
  }
  local_60 = FUN_14001b11b(local_78,uVar4,0x15);
  FUN_140019fc2(param_4,local_60);
  FUN_140030a90(local_58);
  return;
}

