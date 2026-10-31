/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00434476 */

void __fastcall FUN_00434476(int *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  uint *puVar8;
  int *piVar9;
  int *local_48;
  int local_44;
  int *local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_48;
  local_40 = (int *)param_2[9];
  iVar1 = *local_40;
  local_3c = *(undefined4 *)(iVar1 + 0x5c);
  local_44 = *(int *)(iVar1 + 100);
  local_48 = param_2;
  local_20 = FUN_0041df8b(iVar1);
  if (local_20 == 0) {
    *param_1 = 0;
    puVar3 = (undefined4 *)FUN_0041e773(local_44,0x18,&local_20);
    *param_1 = (int)puVar3;
    if ((local_20 != 0) || (local_20 = FUN_0041cb28(puVar3,local_44), local_20 != 0))
    goto LAB_004344ec;
    iVar4 = -0x1d38;
    do {
      uVar6 = *(undefined4 *)(&UNK_004e24cc + iVar4);
      uVar5 = FUN_0041df5f(iVar1,uVar6);
      if ((uVar5 != 0) &&
         (local_20 = FUN_0041cb8d(uVar5,uVar6,(uint *)*param_1,local_44), local_20 != 0))
      goto LAB_004344ec;
      piVar9 = local_40;
      iVar4 = iVar4 + 8;
    } while (iVar4 != 0);
    uVar6 = FUN_0042fab9((int)local_40);
    if ((char)uVar6 != '\0') {
      local_24 = 1;
      local_18 = 0;
      local_1c = 0;
      uStack_38 = (**(code **)(*(int *)(piVar9[0x66] + 0x38) + 0x44))(piVar9[3]);
      piVar7 = (int *)(**(code **)(*(int *)(piVar9[0x66] + 0x38) + 100))();
      local_48 = *(int **)(*local_48 + 8);
      (**(code **)(*(int *)(piVar9[0x66] + 0x38) + 0x58))
                (*(undefined4 *)
                  ("mldAbarAnmrAtsvAumaBgneBdhuBmkaCsnaCiraCrehCtpoCtrpClryCaveDtrsDihtEroeG" +
                  (int)local_48 * 4),0,&local_24,&local_1c,0,0);
      local_48 = piVar7;
      (**(code **)(*(int *)(piVar9[0x66] + 0x38) + 0x4c))(uStack_38,0x47535542,&local_1c,0,0,piVar7)
      ;
      iVar4 = local_44;
      puVar8 = (uint *)FUN_0041e773(local_44,0x18,&local_20);
      if ((local_20 == 0) && (local_20 = FUN_0041cb28(puVar8,iVar4), local_20 == 0)) {
        uStack_28 = 0xffffffff;
        iVar4 = *(int *)(local_40[0x66] + 0x38);
        piVar9 = local_40;
        while (iVar4 = (**(code **)(iVar4 + 0x78))(local_48,&uStack_28), iVar4 != 0) {
          if ((uStack_28 < *(ushort *)(piVar9 + 6)) &&
             (iVar4 = *(int *)(piVar9[7] + uStack_28 * 4), iVar4 != 0)) {
            FUN_004347ca(piVar9,puVar8,iVar4);
            piVar9 = local_40;
          }
          iVar4 = *(int *)(piVar9[0x66] + 0x38);
        }
        uStack_2c = 0;
        uVar6 = FUN_0041cd2d(&uStack_2c,&uStack_30,&uStack_34,(int)puVar8);
        iVar4 = local_44;
        cVar2 = (char)uVar6;
        while ((cVar2 != '\0' &&
               (((0xffff < uStack_30 ||
                 (puVar3 = (undefined4 *)FUN_0041ccd3(uStack_30,*param_1),
                 puVar3 == (undefined4 *)0x0)) ||
                (local_20 = FUN_004348b2(uStack_30,uStack_34,*puVar3,(uint *)*param_1,(int)puVar8,
                                         iVar4), local_20 == 0))))) {
          uVar6 = FUN_0041cd2d(&uStack_2c,&uStack_30,&uStack_34,(int)puVar8);
          cVar2 = (char)uVar6;
        }
      }
      (**(code **)(*(int *)(local_40[0x66] + 0x38) + 0x68))(local_48);
      FUN_0041cb3c((int)puVar8,iVar4);
      FUN_0041c607(iVar4,(int)puVar8);
    }
    *(undefined4 *)(iVar1 + 0x5c) = local_3c;
    if (local_20 == 0) goto LAB_0043451f;
  }
  else {
LAB_004344ec:
    *(undefined4 *)(iVar1 + 0x5c) = local_3c;
  }
  iVar1 = local_44;
  if (*param_1 == 0) {
    iVar4 = 0;
  }
  else {
    FUN_0041cb3c(*param_1,local_44);
    iVar4 = *param_1;
  }
  FUN_0041c607(iVar1,iVar4);
  *param_1 = 0;
LAB_0043451f:
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_48);
}

