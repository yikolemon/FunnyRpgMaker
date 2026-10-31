/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044f47d */

int __fastcall FUN_0044f47d(char *param_1,uint param_2,int *param_3,uint param_4)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_18;
  local_18 = FUN_00420696((int)param_3,param_4);
  iVar3 = local_18;
  if (local_18 == 0) {
    cVar1 = FUN_00420d96(param_3,&local_18);
    iVar3 = local_18;
    if (local_18 == 0) {
      *param_1 = cVar1;
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      if (cVar1 != '\0') {
        iVar3 = 3;
        if (cVar1 != '\x03') goto LAB_0044f4c2;
        uVar2 = FUN_0042070a(param_3,&local_18);
        iVar3 = local_18;
        if (local_18 != 0) goto LAB_0044f4c2;
        iVar3 = 3;
        if (uVar2 == 0) goto LAB_0044f4c2;
        param_2 = (uint)uVar2 * 3 + 2;
      }
      *(uint *)(param_1 + 0xc) = param_2;
      iVar3 = FUN_00420bb8(param_3,param_2,(int *)(param_1 + 8));
    }
  }
LAB_0044f4c2:
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_18)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_18);
}

