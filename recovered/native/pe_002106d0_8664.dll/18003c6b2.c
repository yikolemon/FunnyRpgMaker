/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003c6b2 */

void FUN_18003c6b2(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [40];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(param_2 + 0x18);
  FUN_18003ae98(local_50,9,param_1 + 8);
  uVar4 = lVar1 * 100 +
          (lVar1 / 10000000) * -1000000000 + (lVar1 / -0x6769800000000000) * 1000000000;
  lVar1 = 0x3f;
  if ((uVar4 | 1) != 0) {
    for (; (uVar4 | 1) >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  uVar3 = (uint)(byte)(&DAT_1802b1db0)[lVar1] -
          (uint)(uVar4 < *(ulonglong *)
                          (&DAT_1802b1df0 + (ulonglong)(byte)(&DAT_1802b1db0)[lVar1] * 8));
  if (uVar3 < 9) {
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
    } while (uVar3 != 9);
  }
  local_58 = FUN_180025acd(local_70,uVar4,0x15);
  FUN_180018bde(param_4,local_58);
  FUN_18003af0c(local_50);
  return;
}

