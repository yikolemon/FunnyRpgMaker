/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045dfbb */

undefined4 __fastcall FUN_0045dfbb(int param_1,int param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint local_10;
  uint local_c;
  
  local_c = DAT_0050e8c0 ^ (uint)&local_10;
  iVar5 = param_2 + 1;
  do {
    iVar5 = iVar5 + -1;
    if (iVar5 < 1) goto LAB_0045dfff;
    pbVar1 = FUN_0045dd89(param_1,(int *)0x0);
  } while (pbVar1 != (byte *)0x0);
LAB_0045dfe2:
  uVar2 = 0xa0;
LAB_0045dfe7:
  if (DAT_0050e8c0 != (local_c ^ (uint)&local_10)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_c ^ (uint)&local_10);
  }
  return uVar2;
  while( true ) {
    uVar4 = FUN_0045ddce(puVar3,local_10);
    uVar2 = 0;
    if ((uVar4 == 0x14) || (uVar4 == 0x11)) break;
LAB_0045dfff:
    puVar3 = (uint *)FUN_0045dd89(param_1,(int *)&local_10);
    if (puVar3 == (uint *)0x0) goto LAB_0045dfe2;
  }
  goto LAB_0045dfe7;
}

