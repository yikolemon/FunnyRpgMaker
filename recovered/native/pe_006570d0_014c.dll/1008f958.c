/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008f958 */

undefined2 * __thiscall
FUN_1008f958(int param_1,undefined2 *param_2,undefined2 *param_3,int param_4,uint param_5)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  int iVar8;
  bool bVar9;
  int local_20;
  int local_1c;
  undefined2 *local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_20;
  iVar5 = param_4;
  if (param_4 == 0) {
    iVar5 = *(int *)(param_1 + 100);
  }
  puVar7 = param_2;
  if (iVar5 == 0 || param_2 == param_3) {
switchD_1008f9a5_caseD_c:
  }
  else {
LAB_1008f998:
    switch(*(undefined4 *)(iVar5 + 4)) {
    case 1:
    case 8:
    case 9:
    case 0xb:
    case 0xd:
    case 0xe:
    case 0x11:
    case 0x14:
      goto switchD_1008f9a5_caseD_1;
    case 2:
      puVar7 = param_3;
      if (((*(byte *)(param_1 + 0x75) & 0x10) != 0) &&
         (cVar2 = FUN_10090b08(param_2[-1]), puVar7 = param_2, cVar2 == '\0')) {
        puVar7 = (undefined2 *)
                 FUN_100918af(param_2,param_3,&DAT_10295adc,&DAT_10295ae4,(uint)local_18 & 0xff);
        puVar7 = puVar7 + (puVar7 != param_3);
      }
      break;
    case 3:
      puVar7 = param_3;
      if ((*(byte *)(param_1 + 0x75) & 0x10) == 0) break;
      puVar7 = (undefined2 *)
               FUN_100918af(param_2,param_3,&DAT_10295adc,&DAT_10295ae4,(uint)local_18 & 0xff);
      if (DAT_10388d00 == (local_14 ^ (uint)&local_20)) {
        return puVar7;
      }
      goto LAB_1008fc94;
    case 4:
      uVar4 = *(undefined4 *)(iVar5 + 8);
      cVar2 = FUN_10090ec1(param_2[-1]);
      while ((puVar7 = param_2, param_2 != param_3 &&
             (cVar3 = FUN_10090ec1(*param_2), ((cVar2 != cVar3 ^ (byte)uVar4) & 1) == 0))) {
        param_2 = param_2 + 1;
        cVar2 = cVar3;
      }
      break;
    case 5:
      if (param_5 < 0x32) {
        iVar5 = FUN_1008f958(param_2 + 1,param_3,*(undefined4 *)(iVar5 + 0xc),param_5 + 1);
        puVar7 = (undefined2 *)(iVar5 + -2);
        break;
      }
      goto switchD_1008f9a5_caseD_c;
    case 6:
      uVar1 = *(uint *)(iVar5 + 0x18);
      iVar5 = *(int *)(iVar5 + 0x1c);
      local_18 = param_3;
      if ((1 < uVar1) && (param_3 != *(undefined2 **)(param_1 + 0x70))) {
        FUN_10091822(&local_18,param_1 + 0x70,uVar1 - 1,0);
      }
      puVar7 = (undefined2 *)
               FUN_10091852(param_2,local_18,iVar5,iVar5 + uVar1 * 2,*(undefined4 *)(param_1 + 0x68)
                            ,*(undefined4 *)(param_1 + 0x74));
      if (local_18 == puVar7) {
        puVar7 = param_3;
      }
      break;
    case 7:
      goto LAB_1008fa30;
    case 10:
      if (param_5 < 0x32) {
        local_20 = param_5 + 1;
        puVar7 = (undefined2 *)FUN_1008f958(param_2,param_3,*(undefined4 *)(iVar5 + 0x14),local_20);
        goto LAB_1008fb99;
      }
    default:
      goto switchD_1008f9a5_caseD_c;
    case 0x10:
      if (*(int *)(iVar5 + 0x18) == 0) goto switchD_1008f9a5_caseD_1;
      if (0x31 < param_5) goto switchD_1008f9a5_caseD_c;
      local_20 = param_5 + 1;
      local_1c = param_1;
      do {
        local_18 = param_2;
        FUN_1009188d(&local_18,&param_3,0x200);
        iVar8 = iVar5;
        puVar7 = local_18;
        if (param_2 == local_18) {
          bVar9 = false;
          param_2 = local_18;
        }
        else {
          do {
            puVar7 = (undefined2 *)
                     FUN_1008f958(param_2,puVar7,*(undefined4 *)(iVar8 + 0xc),local_20);
            if (*(int *)(iVar8 + 0x18) == 0) break;
            iVar8 = *(int *)(iVar8 + 0x18);
          } while (param_2 != puVar7);
          bVar9 = puVar7 != local_18;
          param_2 = puVar7;
        }
        puVar7 = param_2;
      } while ((!bVar9) && (param_2 != param_3));
      break;
    case 0x12:
      if (0 < *(int *)(iVar5 + 0x14)) goto switchD_1008f9a5_caseD_1;
      if (param_5 < 0x32) {
        local_20 = param_5 + 1;
        goto LAB_1008f9d9;
      }
      goto switchD_1008f9a5_caseD_c;
    }
  }
  goto LAB_1008fc0b;
  while (param_2 != param_3) {
LAB_1008f9d9:
    local_18 = param_2;
    FUN_1009188d(&local_18,&param_3,0x200);
    iVar8 = local_20;
    uVar4 = FUN_1008f958(param_2,local_18,*(undefined4 *)(iVar5 + 0xc),local_20);
    param_2 = (undefined2 *)
              FUN_1008f958(param_2,uVar4,*(undefined4 *)(*(int *)(iVar5 + 0x1c) + 0xc),iVar8);
    puVar7 = param_2;
    if (param_2 != local_18) break;
  }
  goto LAB_1008fc0b;
  while (puVar7 = (undefined2 *)FUN_1008f958(puVar6,param_3,*(undefined4 *)(iVar5 + 0x14),local_20),
        puVar6 != puVar7) {
LAB_1008fb99:
    puVar6 = (undefined2 *)FUN_1008f958(puVar7,param_3,*(undefined4 *)(iVar5 + 0xc),local_20);
    if (puVar6 == puVar7) break;
  }
  goto LAB_1008fc0b;
switchD_1008f9a5_caseD_1:
  iVar5 = *(int *)(iVar5 + 0xc);
  if (iVar5 == 0) goto switchD_1008f9a5_caseD_c;
  goto LAB_1008f998;
  while (puVar7 = puVar7 + 1, puVar7 != param_3) {
LAB_1008fa30:
    puVar6 = (undefined2 *)FUN_10090c18(iVar5,puVar7);
    if (puVar7 != puVar6) break;
  }
LAB_1008fc0b:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_20)) {
    return puVar7;
  }
LAB_1008fc94:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

