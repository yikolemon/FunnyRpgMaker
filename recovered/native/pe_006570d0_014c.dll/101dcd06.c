/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101dcd06 */

void __fastcall FUN_101dcd06(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uVar9;
  int *local_48;
  undefined4 local_44;
  int *local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [4];
  uint uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_48;
  local_40 = (int *)param_2[9];
  iVar3 = *local_40;
  local_3c = *(undefined4 *)(iVar3 + 0x5c);
  local_44 = *(undefined4 *)(iVar3 + 100);
  local_48 = param_2;
  local_20 = FUN_101c199b(iVar3);
  if (local_20 == 0) {
    *param_1 = 0;
    iVar2 = FUN_101c21f6(local_44,0x18,&local_20);
    *param_1 = iVar2;
    if ((local_20 != 0) || (local_20 = FUN_101c0538(iVar2,local_44), local_20 != 0))
    goto LAB_101dcd7c;
    iVar2 = -0x1d38;
    do {
      uVar9 = *(undefined4 *)(&UNK_1030df28 + iVar2);
      iVar4 = FUN_101c196f(iVar3,uVar9);
      if ((iVar4 != 0) && (local_20 = FUN_101c059d(iVar4,uVar9,*param_1,local_44), local_20 != 0))
      goto LAB_101dcd7c;
      piVar8 = local_40;
      iVar2 = iVar2 + 8;
    } while (iVar2 != 0);
    cVar1 = FUN_101d8349();
    if (cVar1 != '\0') {
      local_24 = 1;
      local_18 = 0;
      local_1c = 0;
      uStack_38 = (**(code **)(*(int *)(piVar8[0x66] + 0x38) + 0x44))(piVar8[3]);
      piVar5 = (int *)(**(code **)(*(int *)(piVar8[0x66] + 0x38) + 100))();
      local_48 = *(int **)(*local_48 + 8);
      (**(code **)(*(int *)(piVar8[0x66] + 0x38) + 0x58))
                (*(undefined4 *)
                  ("mldAbarAnmrAtsvAumaBgneBdhuBmkaCsnaCiraCrehCtpoCtrpClryCaveDtrsDihtEroeG" +
                  (int)local_48 * 4),0,&local_24,&local_1c,0,0);
      local_48 = piVar5;
      (**(code **)(*(int *)(piVar8[0x66] + 0x38) + 0x4c))(uStack_38,0x47535542,&local_1c,0,0,piVar5)
      ;
      uVar9 = local_44;
      uVar6 = FUN_101c21f6(local_44,0x18,&local_20);
      if ((local_20 == 0) && (local_20 = FUN_101c0538(uVar6,uVar9), local_20 == 0)) {
        uStack_28 = 0xffffffff;
        iVar2 = *(int *)(local_40[0x66] + 0x38);
        piVar8 = local_40;
        while (iVar2 = (**(code **)(iVar2 + 0x78))(local_48,&uStack_28), iVar2 != 0) {
          if ((uStack_28 < *(ushort *)(piVar8 + 6)) &&
             (iVar2 = *(int *)(piVar8[7] + uStack_28 * 4), iVar2 != 0)) {
            FUN_101dd05a(iVar2);
            piVar8 = local_40;
          }
          iVar2 = *(int *)(piVar8[0x66] + 0x38);
        }
        uStack_2c = 0;
        cVar1 = FUN_101c073d(&uStack_2c,&uStack_30,auStack_34,uVar6);
        uVar9 = local_44;
        while ((cVar1 != '\0' &&
               (((0xffff < uStack_30 ||
                 (puVar7 = (undefined4 *)FUN_101c06e3(uStack_30,*param_1),
                 puVar7 == (undefined4 *)0x0)) ||
                (local_20 = FUN_101dd142(*puVar7,*param_1,uVar6,uVar9), local_20 == 0))))) {
          cVar1 = FUN_101c073d(&uStack_2c,&uStack_30,auStack_34,uVar6);
        }
      }
      (**(code **)(*(int *)(local_40[0x66] + 0x38) + 0x68))(local_48);
      FUN_101c054c(uVar6,uVar9);
      FUN_101c0017(uVar9,uVar6);
    }
    *(undefined4 *)(iVar3 + 0x5c) = local_3c;
    if (local_20 == 0) goto LAB_101dcdaf;
  }
  else {
LAB_101dcd7c:
    *(undefined4 *)(iVar3 + 0x5c) = local_3c;
  }
  uVar9 = local_44;
  if (*param_1 == 0) {
    iVar3 = 0;
  }
  else {
    FUN_101c054c(*param_1,local_44);
    iVar3 = *param_1;
  }
  FUN_101c0017(uVar9,iVar3);
  *param_1 = 0;
LAB_101dcdaf:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

