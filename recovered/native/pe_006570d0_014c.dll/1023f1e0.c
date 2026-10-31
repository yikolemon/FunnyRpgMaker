/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1023f1e0 */

undefined4 FUN_1023f1e0(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  bool bVar5;
  int *unaff_FS_OFFSET;
  int local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1028962d;
  local_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&local_10;
  bVar5 = false;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    iVar2 = FUN_10228350(0x44,uVar1);
    local_8 = 0;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_2 + 4);
      if (iVar2 == 0) {
        puVar3 = &DAT_10356101;
      }
      else {
        puVar3 = *(undefined1 **)(iVar2 + 0x18);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = (undefined1 *)(iVar2 + 0x1c);
        }
      }
      uVar4 = FUN_1000daa4(puVar3);
      bVar5 = true;
      local_8 = CONCAT31(local_8._1_3_,1);
      iVar2 = FUN_1023f160(uVar4,0);
    }
    *param_1 = iVar2;
    if (bVar5) {
      FUN_1000dcbe();
    }
  }
  *unaff_FS_OFFSET = local_10;
  return 5;
}

