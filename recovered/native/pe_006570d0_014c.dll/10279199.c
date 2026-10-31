/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10279199 */

undefined4 FUN_10279199(undefined4 param_1,byte param_2,uint param_3,byte param_4)

{
  undefined4 uVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8;
  
  FUN_1025be8b(param_1);
  if (((*(byte *)(local_c + 0x19 + (uint)param_2) & param_4) == 0) &&
     ((param_3 == 0 || ((param_3 & *(ushort *)(*local_10 + (uint)param_2 * 2)) == 0)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  if (local_8 != '\0') {
    *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
  }
  return uVar1;
}

