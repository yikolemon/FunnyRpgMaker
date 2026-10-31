/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400b3910 */

undefined4
FUN_1400b3910(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar2 = FUN_1400b0654(param_2,0);
  if ((int)uVar2 < 0) {
    uVar3 = 0xffffffff;
  }
  else {
    lVar4 = _malloc_base((ulonglong)uVar2 * 0x108);
    FUN_1400b0654(param_2,lVar4);
    lVar1 = lVar4 + (ulonglong)(uVar2 << 8) * 2;
    if (uVar2 != 0) {
      uVar5 = 0;
      lVar6 = lVar4;
      do {
        *(longlong *)(lVar1 + uVar5 * 8) = lVar6;
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x200;
      } while (uVar2 != uVar5);
    }
    uVar3 = FUN_1400b39b6(param_1,lVar1,uVar2,param_3,param_4);
    thunk_FUN_1401212e0(lVar4);
  }
  return uVar3;
}

