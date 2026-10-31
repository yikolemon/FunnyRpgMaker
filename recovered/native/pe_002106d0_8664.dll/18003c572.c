/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003c572 */

void FUN_18003c572(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

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
  FUN_18003ae98(local_58,6,param_1 + 8);
  uVar4 = lVar1 / 10 + (lVar1 / 10000000) * -1000000 + (lVar1 / -0x6769800000000000) * 1000000;
  lVar1 = 0x3f;
  if ((uVar4 | 1) != 0) {
    for (; (uVar4 | 1) >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  uVar3 = (uint)(byte)(&DAT_1802b1db0)[lVar1] -
          (uint)(uVar4 < *(ulonglong *)
                          (&DAT_1802b1df0 + (ulonglong)(byte)(&DAT_1802b1db0)[lVar1] * 8));
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
  local_60 = FUN_180025acd(local_78,uVar4,0x15);
  FUN_180018bde(param_4,local_60);
  FUN_18003af0c(local_58);
  return;
}

