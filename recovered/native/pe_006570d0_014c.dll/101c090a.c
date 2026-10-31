/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c090a */

/* WARNING: Removing unreachable block (ram,0x101c09a0) */

int FUN_101c090a(uint *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint *unaff_retaddr;
  undefined4 uStack_24;
  int iStack_20;
  uint uStack_1c;
  
  param_1[0x13] = param_2;
  FUN_10259510();
  uStack_1c = DAT_10388d00 ^ (uint)&uStack_24;
  *param_1 = 0;
  iVar3 = 6;
  if (unaff_retaddr == (uint *)0x0) goto LAB_101c0a0e;
  uVar1 = *unaff_retaddr & 7;
  if (uVar1 == 4) {
    uStack_24 = uRam00000001;
    uVar1 = FUN_101bff17(uRam00000001,0x28,&iStack_20);
    iVar3 = iStack_20;
    if (iStack_20 != 0) goto LAB_101c0a0e;
    *(undefined4 *)(uVar1 + 0x1c) = uStack_24;
    iVar3 = FUN_101d77ac(uVar1,unaff_retaddr[3]);
    if (iVar3 != 0) {
      FUN_101c0017(uStack_24,uVar1);
      goto LAB_101c0a0e;
    }
  }
  else {
    if (uVar1 == 2) {
      uVar1 = unaff_retaddr[4];
      uVar2 = uRam00000001;
      if (uVar1 == 0) goto LAB_101c09b7;
    }
    else {
      if (uVar1 != 1) {
LAB_101c09b7:
        if (((*unaff_retaddr & 2) != 0) && (unaff_retaddr[4] != 0)) {
          FUN_101c0a53(unaff_retaddr[4]);
        }
        goto LAB_101c0a0e;
      }
      uStack_24 = uRam00000001;
      uVar1 = FUN_101bff17(uRam00000001,0x28,&iStack_20);
      iVar3 = iStack_20;
      if (iStack_20 != 0) goto LAB_101c0a0e;
      FUN_101c0a33(uVar1,unaff_retaddr[1],unaff_retaddr[2]);
      uVar2 = uStack_24;
    }
    *(undefined4 *)(uVar1 + 0x1c) = uVar2;
  }
  *param_1 = uVar1;
  iVar3 = 0;
LAB_101c0a0e:
  if (DAT_10388d00 != (uStack_1c ^ (uint)&uStack_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar3;
}

