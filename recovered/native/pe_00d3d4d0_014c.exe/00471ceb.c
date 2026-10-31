/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00471ceb */

undefined1 * __fastcall FUN_00471ceb(int param_1,int *param_2,int param_3,undefined *param_4)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 *local_24;
  int *local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_24;
  local_20 = param_2;
  puVar3 = (undefined1 *)FUN_0041e773(param_1,(*(ushort *)(param_3 + 8) >> 1) + 1,&local_18);
  piVar2 = local_20;
  puVar6 = (undefined1 *)0x0;
  if (local_18 == 0) {
    local_24 = puVar3;
    local_18 = FUN_00420696((int)local_20,*(uint *)(param_3 + 0xc));
    if ((local_18 == 0) &&
       (local_18 = FUN_00420be1(piVar2,(uint)*(ushort *)(param_3 + 8)), local_18 == 0)) {
      uVar7 = (uint)(*(ushort *)(param_3 + 8) >> 1);
      if (uVar7 == 0) {
        *local_24 = 0;
        FUN_00420cde(piVar2);
      }
      else {
        iVar1 = piVar2[8];
        uVar5 = 0;
        puVar3 = local_24;
        local_1c = param_1;
        do {
          if ((*(char *)(iVar1 + uVar5 * 2) == '\0') &&
             (iVar4 = (*(code *)param_4)((int)*(char *)(iVar1 + 1 + uVar5 * 2)), iVar4 != 0)) {
            *puVar3 = *(undefined1 *)(iVar1 + 1 + uVar5 * 2);
            puVar3 = puVar3 + 1;
          }
          uVar5 = uVar5 + 1;
        } while (uVar7 != uVar5);
        *puVar3 = 0;
        FUN_00420cde(local_20);
        puVar6 = local_24;
        param_1 = local_1c;
        if (puVar3 != local_24) goto LAB_00471d7b;
      }
    }
    FUN_0041c607(param_1,(int)local_24);
    *(undefined2 *)(param_3 + 8) = 0;
    *(undefined4 *)(param_3 + 0xc) = 0;
    FUN_0041c607(param_1,*(int *)(param_3 + 0x10));
    *(undefined4 *)(param_3 + 0x10) = 0;
    puVar6 = (undefined1 *)0x0;
  }
LAB_00471d7b:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_24);
  }
  return puVar6;
}

