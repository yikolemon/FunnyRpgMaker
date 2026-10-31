/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e78b2 */

/* WARNING: Type propagation algorithm not settling */

void FUN_1801e78b2(longlong *param_1,longlong *param_2)

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
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_a8;
  plVar2 = (longlong *)param_2[6];
  lVar10 = *plVar2;
  local_78 = *(undefined8 *)(lVar10 + 0x88);
  uVar3 = *(undefined8 *)(lVar10 + 0x98);
  local_64[4] = FUN_1801cb6b3(lVar10);
  if (local_64[4] == 0) {
    *param_1 = 0;
    lVar6 = FUN_1801cc006(uVar3,0x28,local_64 + 4);
    *param_1 = lVar6;
    if ((local_64[4] != 0) || (local_64[4] = FUN_1801ca183(lVar6,uVar3), local_64[4] != 0))
    goto LAB_1801e7939;
    lVar6 = 0;
    do {
      uVar1 = *(undefined4 *)((longlong)&DAT_180335310 + lVar6);
      iVar5 = FUN_1801cb681(lVar10,uVar1);
      if ((iVar5 != 0) &&
         (local_64[4] = FUN_1801ca2cd(iVar5,uVar1,*param_1,uVar3), local_64[4] != 0))
      goto LAB_1801e7939;
      lVar6 = lVar6 + 8;
    } while (lVar6 != 0x1d38);
    cVar4 = FUN_1801e2736(plVar2);
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
      uVar7 = FUN_1801cc006(uVar3,0x28,local_64 + 4);
      if ((local_64[4] == 0) && (local_64[4] = FUN_1801ca183(uVar7,uVar3), local_64[4] == 0)) {
        local_64[2] = 0xffffffff;
        iVar5 = (**(code **)(*(longlong *)(plVar2[99] + 0x48) + 0xf0))(uVar8);
        if (iVar5 != 0) {
          do {
            if ((local_64[2] < *(ushort *)(plVar2 + 6)) &&
               (*(int *)(plVar2[7] + (ulonglong)local_64[2] * 4) != 0)) {
              FUN_1801e7c70(plVar2,uVar7);
            }
            iVar5 = (**(code **)(*(longlong *)(plVar2[99] + 0x48) + 0xf0))(uVar8,local_64 + 2);
          } while (iVar5 != 0);
        }
        local_64[1] = 0;
        cVar4 = FUN_1801ca321(local_64 + 1,local_64,&local_70,uVar7);
        if (cVar4 != '\0') {
          do {
            if (((local_64[0] < 0x10000) &&
                (puVar9 = (undefined4 *)FUN_1801ca31a(local_64[0],*param_1),
                puVar9 != (undefined4 *)0x0)) &&
               (local_88 = uVar7, uStack_80 = uVar3,
               local_64[4] = FUN_1801e7d66(local_64[0],local_70,*puVar9,*param_1), local_64[4] != 0)
               ) break;
            cVar4 = FUN_1801ca321(local_64 + 1,local_64,&local_70,uVar7);
          } while (cVar4 != '\0');
        }
      }
      (**(code **)(*(longlong *)(plVar2[99] + 0x48) + 0xd0))(uVar8);
      FUN_1801ca18d(uVar7,uVar3);
      FUN_1801c9b65(uVar3,uVar7);
    }
    *(undefined8 *)(lVar10 + 0x88) = local_78;
    if (local_64[4] == 0) goto LAB_1801e796b;
  }
  else {
LAB_1801e7939:
    *(undefined8 *)(lVar10 + 0x88) = local_78;
  }
  if (*param_1 == 0) {
    lVar10 = 0;
  }
  else {
    FUN_1801ca18d(*param_1,uVar3);
    lVar10 = *param_1;
  }
  FUN_1801c9b65(uVar3,lVar10);
  *param_1 = 0;
LAB_1801e796b:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_a8);
  }
  return;
}

