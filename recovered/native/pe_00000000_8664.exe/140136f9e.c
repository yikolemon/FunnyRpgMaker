/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140136f9e */

/* WARNING: Type propagation algorithm not settling */

void FUN_140136f9e(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  uint local_64 [5];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_a8;
  plVar2 = (longlong *)param_2[6];
  lVar10 = *plVar2;
  local_78 = *(undefined8 *)(lVar10 + 0x88);
  uVar3 = *(undefined8 *)(lVar10 + 0x98);
  local_64[4] = FUN_14012a687(lVar10);
  if (local_64[4] == 0) {
    *param_1 = 0;
    lVar6 = FUN_14012afda(uVar3,0x28,local_64 + 4);
    *param_1 = lVar6;
    if ((local_64[4] != 0) || (local_64[4] = FUN_140129157(lVar6,uVar3), local_64[4] != 0))
    goto LAB_140137025;
    lVar6 = 0;
    do {
      uVar1 = *(undefined4 *)((longlong)&DAT_140e99670 + lVar6);
      iVar5 = FUN_14012a655(lVar10,uVar1);
      if ((iVar5 != 0) &&
         (local_64[4] = FUN_1401292a1(iVar5,uVar1,*param_1,uVar3), local_64[4] != 0))
      goto LAB_140137025;
      lVar6 = lVar6 + 8;
    } while (lVar6 != 0x1d38);
    cVar4 = FUN_140131e22(plVar2);
    if (cVar4 != '\0') {
      local_64[3] = 1;
      local_50 = 0;
      uVar7 = (**(code **)(*(longlong *)(plVar2[99] + 0x48) + 0x88))(plVar2[3]);
      uVar8 = (**(code **)(*(longlong *)(plVar2[99] + 0x48) + 200))();
      local_88 = 0;
      uStack_80 = 0;
      (**(code **)(*(longlong *)(plVar2[99] + 0x48) + 0xb0))
                (*(undefined4 *)
                  ("mldAbarAnmrAtsvAumaBgneBdhuBmkaCsnaCiraCrehCtpoCtrpClryCaveDtrsDihtEroeG" +
                  (longlong)*(int *)(*param_2 + 8) * 4),0,local_64 + 3,&local_50);
      local_88 = 0;
      uStack_80 = uVar8;
      (**(code **)(*(longlong *)(plVar2[99] + 0x48) + 0x98))(uVar7,0x47535542,&local_50,0);
      uVar7 = FUN_14012afda(uVar3,0x28,local_64 + 4);
      if ((local_64[4] == 0) && (local_64[4] = FUN_140129157(uVar7,uVar3), local_64[4] == 0)) {
        local_64[2] = 0xffffffff;
        iVar5 = (**(code **)(*(longlong *)(plVar2[99] + 0x48) + 0xf0))(uVar8);
        if (iVar5 != 0) {
          do {
            if ((local_64[2] < *(ushort *)(plVar2 + 6)) &&
               (*(int *)(plVar2[7] + (ulonglong)local_64[2] * 4) != 0)) {
              FUN_14013735c(plVar2,uVar7);
            }
            iVar5 = (**(code **)(*(longlong *)(plVar2[99] + 0x48) + 0xf0))(uVar8,local_64 + 2);
          } while (iVar5 != 0);
        }
        local_64[1] = 0;
        cVar4 = FUN_1401292f5(local_64 + 1,local_64,&local_70,uVar7);
        if (cVar4 != '\0') {
          do {
            if (((local_64[0] < 0x10000) &&
                (puVar9 = (undefined4 *)FUN_1401292ee(local_64[0],*param_1),
                puVar9 != (undefined4 *)0x0)) &&
               (local_88 = uVar7, uStack_80 = uVar3,
               local_64[4] = FUN_140137452(local_64[0],local_70,*puVar9,*param_1), local_64[4] != 0)
               ) break;
            cVar4 = FUN_1401292f5(local_64 + 1,local_64,&local_70,uVar7);
          } while (cVar4 != '\0');
        }
      }
      (**(code **)(*(longlong *)(plVar2[99] + 0x48) + 0xd0))(uVar8);
      FUN_140129161(uVar7,uVar3);
      FUN_140128b39(uVar3,uVar7);
    }
    *(undefined8 *)(lVar10 + 0x88) = local_78;
    if (local_64[4] == 0) goto LAB_140137057;
  }
  else {
LAB_140137025:
    *(undefined8 *)(lVar10 + 0x88) = local_78;
  }
  if (*param_1 == 0) {
    lVar10 = 0;
  }
  else {
    FUN_140129161(*param_1,uVar3);
    lVar10 = *param_1;
  }
  FUN_140128b39(uVar3,lVar10);
  *param_1 = 0;
LAB_140137057:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_a8);
  }
  return;
}

