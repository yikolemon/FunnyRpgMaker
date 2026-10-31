/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fc16a */

ulonglong FUN_1800fc16a(longlong param_1,byte param_2)

{
  undefined1 uVar1;
  ulonglong in_RAX;
  undefined7 uVar2;
  longlong lVar3;
  
  lVar3 = 0;
  do {
    uVar1 = *(undefined1 *)(param_1 + 0x40 + lVar3);
    uVar2 = (undefined7)(in_RAX >> 8);
    in_RAX = CONCAT71(uVar2,uVar1);
    if (((byte)((in_RAX & 0xffffffff) >> 3) & 0x1f) == param_2) {
      return CONCAT71(uVar2,uVar1) & 0xffffffffffffff07;
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 8);
  return 0;
}

