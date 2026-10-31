/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140034ee6 */

void FUN_140034ee6(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  uint *puVar10;
  uint *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStackY_a8 [32];
  ulonglong local_70;
  uint local_64 [5];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_a8;
  plVar2 = (longlong *)param_2[6];
  lVar12 = *plVar2;
  uVar3 = *(undefined8 *)(lVar12 + 0x88);
  lVar4 = *(longlong *)(lVar12 + 0x98);
  uVar7 = FUN_14001e08b(lVar12);
  local_64[4] = (uint)uVar7;
  if (local_64[4] == 0) {
    *param_1 = 0;
    puVar8 = (undefined8 *)FUN_14001e961(lVar4,0x28,(int *)(local_64 + 4));
    *param_1 = (longlong)puVar8;
    if ((local_64[4] != 0) || (local_64[4] = FUN_14001cb5b(puVar8,lVar4), local_64[4] != 0))
    goto LAB_140034f6d;
    lVar13 = 0;
    do {
      uVar1 = *(uint *)((longlong)&DAT_1400f2430 + lVar13);
      uVar5 = FUN_14001e059(lVar12);
      if ((uVar5 != 0) &&
         (local_64[4] = FUN_14001cca5(uVar5,(ulonglong)uVar1,(uint *)*param_1,lVar4),
         local_64[4] != 0)) goto LAB_140034f6d;
      lVar13 = lVar13 + 8;
    } while (lVar13 != 0x1d38);
    uVar7 = FUN_14002fd6a((longlong)plVar2);
    if ((char)uVar7 != '\0') {
      local_64[3] = 1;
      local_50 = 0;
      uVar7 = (**(code **)(*(longlong *)(plVar2[99] + 0x48) + 0x88))(plVar2[3]);
      uVar9 = (**(code **)(*(longlong *)(plVar2[99] + 0x48) + 200))();
      (**(code **)(*(longlong *)(plVar2[99] + 0x48) + 0xb0))
                (*(undefined4 *)
                  ("mldAbarAnmrAtsvAumaBgneBdhuBmkaCsnaCiraCrehCtpoCtrpClryCaveDtrsDihtEroeG" +
                  (longlong)*(int *)(*param_2 + 8) * 4),0,local_64 + 3,&local_50);
      (**(code **)(*(longlong *)(plVar2[99] + 0x48) + 0x98))(uVar7,0x47535542,&local_50,0);
      puVar10 = (uint *)FUN_14001e961(lVar4,0x28,(int *)(local_64 + 4));
      if ((local_64[4] == 0) &&
         (local_64[4] = FUN_14001cb5b((undefined8 *)puVar10,lVar4), local_64[4] == 0)) {
        local_64[2] = 0xffffffff;
        iVar6 = (**(code **)(*(longlong *)(plVar2[99] + 0x48) + 0xf0))(uVar9);
        if (iVar6 != 0) {
          do {
            if ((local_64[2] < *(ushort *)(plVar2 + 6)) &&
               (uVar1 = *(uint *)(plVar2[7] + (ulonglong)local_64[2] * 4), uVar1 != 0)) {
              FUN_1400352a4(plVar2,puVar10,(ulonglong)uVar1);
            }
            iVar6 = (**(code **)(*(longlong *)(plVar2[99] + 0x48) + 0xf0))(uVar9,local_64 + 2);
          } while (iVar6 != 0);
        }
        local_64[1] = 0;
        uVar7 = FUN_14001ccf9(local_64 + 1,local_64,&local_70,(longlong)puVar10);
        if ((char)uVar7 != '\0') {
          do {
            if (((local_64[0] < 0x10000) &&
                (puVar11 = (uint *)FUN_14001ccf2(local_64[0],*param_1), puVar11 != (uint *)0x0)) &&
               (local_64[4] = FUN_14003539a(local_64[0],local_70,*puVar11,(uint *)*param_1,
                                            (longlong)puVar10,lVar4), local_64[4] != 0)) break;
            uVar7 = FUN_14001ccf9(local_64 + 1,local_64,&local_70,(longlong)puVar10);
          } while ((char)uVar7 != '\0');
        }
      }
      (**(code **)(*(longlong *)(plVar2[99] + 0x48) + 0xd0))(uVar9);
      FUN_14001cb65((longlong)puVar10,lVar4);
      FUN_14001c53d(lVar4,(longlong)puVar10);
    }
    *(undefined8 *)(lVar12 + 0x88) = uVar3;
    if (local_64[4] == 0) goto LAB_140034f9f;
  }
  else {
LAB_140034f6d:
    *(undefined8 *)(lVar12 + 0x88) = uVar3;
  }
  if (*param_1 == 0) {
    lVar12 = 0;
  }
  else {
    FUN_14001cb65(*param_1,lVar4);
    lVar12 = *param_1;
  }
  FUN_14001c53d(lVar4,lVar12);
  *param_1 = 0;
LAB_140034f9f:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_a8);
  }
  return;
}

