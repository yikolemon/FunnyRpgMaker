/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1023ece0 */

undefined4 FUN_1023ece0(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  bool bVar6;
  int *unaff_FS_OFFSET;
  int local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10289575;
  local_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&local_10;
  bVar6 = false;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    puVar3 = (undefined4 *)FUN_10228350(0x58,uVar2);
    local_8 = 0;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      iVar1 = *(int *)(param_2 + 4);
      if (iVar1 == 0) {
        puVar4 = &DAT_10356101;
      }
      else {
        puVar4 = *(undefined1 **)(iVar1 + 0x18);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = (undefined1 *)(iVar1 + 0x1c);
        }
      }
      uVar5 = FUN_1000daa4(puVar4);
      bVar6 = true;
      puVar3[1] = 0;
      local_8 = 2;
      *puVar3 = std::_Mpunct<wchar_t>::vftable;
      *(undefined1 *)(puVar3 + 10) = 0;
      FUN_1023e840(uVar5,1);
      *puVar3 = std::moneypunct<wchar_t,0>::vftable;
    }
    *param_1 = (int)puVar3;
    if (bVar6) {
      FUN_1000dcbe();
    }
  }
  *unaff_FS_OFFSET = local_10;
  return 3;
}

