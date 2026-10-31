/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005418e */

int FUN_14005418e(undefined1 (*param_1) [32],longlong *param_2,undefined8 param_3,longlong param_4)

{
  undefined1 (*pauVar1) [32];
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  char *_Str1;
  uint uVar11;
  undefined8 *puVar12;
  char *pcVar13;
  undefined1 auVar14 [8];
  char *pcVar15;
  ulonglong uVar16;
  char *pcVar17;
  undefined1 auStack_198 [36];
  uint local_174;
  longlong *local_170;
  undefined1 local_168 [8];
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150;
  undefined8 auStack_14f [32];
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_198;
  FUN_1400b3c00(param_1,0,0xc0);
  (*(code *)**(undefined8 **)(param_4 + 8))(param_1,0,0,param_3);
  *(longlong **)(param_1[4] + 0x10) = param_2;
  uVar6 = FUN_140020f72((longlong)param_2);
  iVar7 = FUN_140021063(param_2,0x1f);
  if (iVar7 == 0) {
    iVar7 = strncmp((char *)param_2[7],"%!PS-Adobe-3.0 Resource-CIDFont",0x1f);
    FUN_140021187(param_2);
    if (iVar7 == 0) {
      local_168 = (undefined1  [8])param_1;
      if (param_2[4] != 0) {
        puVar12 = &local_158;
        iVar7 = 0;
        uVar11 = 0x109;
        local_170 = (longlong *)((ulonglong)local_170 & 0xffffffff00000000);
        local_174 = uVar6;
        do {
          lVar2 = param_2[1];
          iVar8 = FUN_140020f72((longlong)param_2);
          uVar6 = (int)lVar2 - iVar8;
          if (uVar11 < uVar6) {
            uVar6 = uVar11;
          }
          uVar16 = (ulonglong)uVar6;
          if (((int)lVar2 != iVar8) && (iVar8 = FUN_140020a85(param_2,puVar12,uVar6), iVar8 != 0))
          goto LAB_14005422a;
          pcVar13 = (undefined1 *)((longlong)puVar12 + uVar16) + -6;
          *(undefined1 *)((longlong)puVar12 + uVar16) = 0;
          uVar6 = uVar6 + (int)local_170;
          pcVar15 = (char *)&local_158;
          if (pcVar15 < pcVar13) {
            iVar8 = -uVar6;
            do {
              if ((*pcVar15 == 'S') && (iVar9 = strncmp(pcVar15,"StartData",9), iVar9 == 0)) {
                iVar7 = 10;
LAB_14005432b:
                iVar9 = FUN_140020f72((longlong)param_2);
                iVar7 = iVar9 + iVar7 + iVar8;
              }
              else if ((pcVar15[1] == 's') && (iVar9 = strncmp(pcVar15,"/sfnts",6), iVar9 == 0)) {
                iVar7 = 7;
                goto LAB_14005432b;
              }
              pcVar15 = pcVar15 + 1;
              iVar8 = iVar8 + 1;
            } while (pcVar15 < pcVar13);
          }
          if (uVar6 < 10) goto LAB_140054382;
          local_158 = *(int **)(local_168 + uVar16 + ((ulonglong)local_170 & 0xffffffff) + 7);
          local_150 = *(undefined1 *)
                       ((longlong)&local_160 + uVar16 + ((ulonglong)local_170 & 0xffffffff) + 7);
          local_170 = (longlong *)CONCAT44(local_170._4_4_,9);
          uVar11 = 0x100;
          puVar12 = auStack_14f;
        } while( true );
      }
      iVar7 = (int)param_2[1];
      goto LAB_140054394;
    }
  }
LAB_140054224:
  iVar8 = 2;
  goto LAB_14005422a;
LAB_140054382:
  uVar6 = local_174;
  if (iVar7 != 0) {
LAB_140054394:
    uVar10 = FUN_140020a41((longlong)param_2,uVar6);
    auVar14 = local_168;
    iVar8 = (int)uVar10;
    if (iVar8 != 0) goto LAB_14005422a;
    uVar11 = iVar7 - uVar6;
    pauVar1 = (undefined1 (*) [32])((longlong)local_168 + 0x80);
    iVar8 = FUN_140021039(param_2,uVar11,(longlong *)(*pauVar1 + 0x18));
    if (iVar8 != 0) goto LAB_14005422a;
    *(int *)(*(undefined1 (*) [32])((longlong)auVar14 + 0xa0) + 4) = iVar7;
    *(uint *)*(undefined1 (*) [32])((longlong)auVar14 + 0xa0) = uVar11;
    pcVar13 = *(char **)(*(undefined1 (*) [32])((longlong)auVar14 + 0x80) + 0x18);
    *(char **)((undefined1 *)auVar14 + 8) = pcVar13;
    *(char **)(undefined1 *)auVar14 = pcVar13;
    *(char **)((undefined1 *)auVar14 + 0x10) = pcVar13 + uVar11;
    *(undefined4 *)(*(undefined1 (*) [32])((longlong)auVar14 + 0xa0) + 0x18) = 0xffffffff;
    local_174 = uVar6;
    local_170 = param_2;
    (**(code **)*(undefined1 (*) [32])((longlong)auVar14 + 0x40))(auVar14);
    (**(code **)(*(undefined1 (*) [32])((longlong)auVar14 + 0x20) + 0x18))(auVar14);
    pcVar17 = *(char **)(undefined1 *)auVar14;
    (**(code **)*(undefined1 (*) [32])((longlong)auVar14 + 0x40))(auVar14);
    (**(code **)(*(undefined1 (*) [32])((longlong)auVar14 + 0x20) + 0x18))(auVar14);
    lVar2 = *(longlong *)((undefined1 *)auVar14 + 0x10);
    pcVar15 = (char *)(lVar2 - 6);
    if (*(char **)(undefined1 *)auVar14 <= pcVar15) {
      pcVar5 = *(char **)(undefined1 *)auVar14;
      local_160 = (longlong *)(*pauVar1 + 0x18);
      do {
        _Str1 = pcVar5;
        iVar8 = *(int *)(*(undefined1 (*) [32])auVar14 + 0x18);
        if (iVar8 != 0) goto LAB_14005422a;
        if ((_Str1 <= (char *)(lVar2 + -9) && *_Str1 == 'S') &&
           (iVar8 = strncmp(_Str1,"StartData",9), iVar8 == 0)) {
          *(char **)(undefined1 *)local_168 = pcVar13;
          (**(code **)(*(undefined1 (*) [32])((longlong)local_168 + 0x60) + 0x10))
                    (local_168,&local_158);
          auVar14 = local_168;
          plVar3 = local_170;
          iVar8 = 0;
          if ((CONCAT71((undefined7)auStack_14f[0],local_150) - (longlong)local_158 == 5) &&
             ((char)local_158[1] == ')' && *local_158 == 0x78654828)) {
            *(char **)(undefined1 *)local_168 = pcVar17;
            iVar9 = (**(code **)(*(undefined1 (*) [32])((longlong)local_168 + 0x40) + 8))(local_168)
            ;
            if (iVar9 < 0) {
              iVar8 = 3;
            }
            else {
              *(int *)(*(undefined1 (*) [32])((longlong)auVar14 + 0xa0) + 8) = iVar9;
            }
          }
          plVar4 = local_160;
          iVar9 = ((int)_Str1 - (int)*local_160) + 10;
          if (iVar9 != iVar7) {
            FUN_14002115a((longlong)plVar3,local_160);
            uVar6 = local_174;
            uVar10 = FUN_140020a41((longlong)plVar3,local_174);
            iVar8 = (int)uVar10;
            if (iVar8 == 0) {
              uVar6 = iVar9 - uVar6;
              iVar8 = FUN_140021039(plVar3,uVar6,plVar4);
              if (iVar8 == 0) {
                *(int *)(*(undefined1 (*) [32])((longlong)local_168 + 0xa0) + 4) = iVar9;
                *(uint *)*(undefined1 (*) [32])((longlong)local_168 + 0xa0) = uVar6;
                lVar2 = *(longlong *)(*(undefined1 (*) [32])((longlong)local_168 + 0x80) + 0x18);
                *(longlong *)((undefined1 *)local_168 + 8) = lVar2;
                *(longlong *)(undefined1 *)local_168 = lVar2;
                *(ulonglong *)((undefined1 *)local_168 + 0x10) = (ulonglong)uVar6 + lVar2;
                iVar8 = 0;
              }
            }
          }
          goto LAB_14005422a;
        }
        auVar14 = local_168;
        if ((_Str1[1] == 's') && (iVar8 = strncmp(_Str1,"/sfnts",6), iVar8 == 0))
        goto LAB_140054224;
        (**(code **)*(undefined1 (*) [32])((longlong)auVar14 + 0x40))(auVar14);
        (**(code **)(*(undefined1 (*) [32])((longlong)auVar14 + 0x20) + 0x18))(auVar14);
        pcVar5 = *(char **)(undefined1 *)auVar14;
        pcVar13 = pcVar17;
        pcVar17 = _Str1;
      } while (*(char **)(undefined1 *)auVar14 <= pcVar15);
    }
  }
  iVar8 = 3;
LAB_14005422a:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStack_198)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStack_198);
  }
  return iVar8;
}

