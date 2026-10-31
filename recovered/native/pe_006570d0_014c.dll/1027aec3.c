/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027aec3 */

ushort FUN_1027aec3(ushort param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  int local_18;
  int local_14;
  char local_c;
  ushort local_8 [2];
  
  if (param_1 == 0xffff) {
    return 0xffff;
  }
  FUN_1025be8b(param_2);
  bVar1 = (byte)param_1;
  if (*(int *)(local_14 + 8) == 0xfde9) {
    if (param_1 < 0x80) {
      if (((&DAT_10323d3a)[(uint)bVar1 * 2] & 1) != 0) {
        bVar1 = *(byte *)(*(int *)(local_14 + 0x94) + (uint)bVar1);
      }
      param_1 = (ushort)bVar1;
    }
    else {
LAB_1027af58:
      iVar2 = ___acrt_LCMapStringW(*(undefined4 *)(local_14 + 0xa8),0x100,&param_1,1,local_8,1);
      if (iVar2 != 0) goto LAB_1027af84;
    }
  }
  else if (param_1 < 0x100) {
    if (((&DAT_10323d3a)[(uint)bVar1 * 2] & 1) == 0) {
      param_1 = param_1 & 0xff;
    }
    else {
      param_1 = (ushort)*(byte *)(*(int *)(local_14 + 0x94) + (uint)bVar1);
    }
  }
  else if (*(int *)(local_14 + 0xa8) != 0) goto LAB_1027af58;
  local_8[0] = param_1;
LAB_1027af84:
  if (local_c != '\0') {
    *(uint *)(local_18 + 0x350) = *(uint *)(local_18 + 0x350) & 0xfffffffd;
  }
  return local_8[0];
}

