/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015623e */

int FUN_14015623e(ulonglong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  ulonglong *puVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *_Str1;
  uint uVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined1 auVar9 [8];
  char *pcVar10;
  uint uVar11;
  ulonglong uVar12;
  char *pcVar13;
  undefined1 auStack_198 [36];
  int local_174;
  ulonglong local_170;
  undefined1 local_168 [8];
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150;
  undefined8 auStack_14f [32];
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_198;
  FUN_1401c5830(param_1,0,0xc0);
  (*(code *)**(undefined8 **)(param_4 + 8))(param_1,0,0,param_3);
  param_1[0x12] = param_2;
  iVar3 = FUN_14012db43(param_2);
  iVar4 = FUN_14012dc34(param_2,0x1f);
  if (iVar4 == 0) {
    iVar4 = strncmp(*(char **)(param_2 + 0x38),"%!PS-Adobe-3.0 Resource-CIDFont",0x1f);
    FUN_14012dd58(param_2);
    if (iVar4 == 0) {
      local_168 = (undefined1  [8])param_1;
      if (*(longlong *)(param_2 + 0x20) != 0) {
        puVar7 = &local_158;
        iVar4 = 0;
        uVar6 = 0x109;
        local_170 = local_170 & 0xffffffff00000000;
        local_174 = iVar3;
        do {
          iVar3 = *(int *)(param_2 + 8);
          iVar5 = FUN_14012db43(param_2);
          uVar11 = iVar3 - iVar5;
          if (uVar6 < uVar11) {
            uVar11 = uVar6;
          }
          uVar12 = (ulonglong)uVar11;
          if ((iVar3 != iVar5) && (iVar5 = FUN_14012d656(param_2,puVar7,uVar12), iVar5 != 0))
          goto LAB_1401562da;
          pcVar8 = (undefined1 *)((longlong)puVar7 + uVar12) + -6;
          *(undefined1 *)((longlong)puVar7 + uVar12) = 0;
          uVar11 = uVar11 + (int)local_170;
          pcVar10 = (char *)&local_158;
          if (pcVar10 < pcVar8) {
            iVar3 = -uVar11;
            do {
              if ((*pcVar10 == 'S') && (iVar5 = strncmp(pcVar10,"StartData",9), iVar5 == 0)) {
                iVar4 = 10;
LAB_1401563db:
                iVar5 = FUN_14012db43(param_2);
                iVar4 = iVar5 + iVar4 + iVar3;
              }
              else if ((pcVar10[1] == 's') && (iVar5 = strncmp(pcVar10,"/sfnts",6), iVar5 == 0)) {
                iVar4 = 7;
                goto LAB_1401563db;
              }
              pcVar10 = pcVar10 + 1;
              iVar3 = iVar3 + 1;
            } while (pcVar10 < pcVar8);
          }
          if (uVar11 < 10) goto LAB_140156432;
          local_158 = *(int **)(local_168 + uVar12 + (local_170 & 0xffffffff) + 7);
          local_150 = *(undefined1 *)((longlong)&local_160 + uVar12 + (local_170 & 0xffffffff) + 7);
          local_170 = CONCAT44(local_170._4_4_,9);
          uVar6 = 0x100;
          puVar7 = auStack_14f;
        } while( true );
      }
      iVar4 = *(int *)(param_2 + 8);
      goto LAB_140156444;
    }
  }
LAB_1401562d4:
  iVar5 = 2;
  goto LAB_1401562da;
LAB_140156432:
  iVar3 = local_174;
  if (iVar4 != 0) {
LAB_140156444:
    iVar5 = FUN_14012d612(param_2,iVar3);
    auVar9 = local_168;
    if (iVar5 != 0) goto LAB_1401562da;
    uVar6 = iVar4 - iVar3;
    puVar1 = (ulonglong *)((longlong)local_168 + 0x98);
    iVar5 = FUN_14012dc0a(param_2,uVar6,puVar1);
    if (iVar5 != 0) goto LAB_1401562da;
    *(int *)((longlong)auVar9 + 0xa4) = iVar4;
    *(uint *)((longlong)auVar9 + 0xa0) = uVar6;
    pcVar8 = *(char **)((longlong)auVar9 + 0x98);
    *(char **)((longlong)auVar9 + 8) = pcVar8;
    *(char **)auVar9 = pcVar8;
    *(char **)((longlong)auVar9 + 0x10) = pcVar8 + uVar6;
    *(undefined4 *)((longlong)auVar9 + 0xb8) = 0xffffffff;
    local_174 = iVar3;
    local_170 = param_2;
    (**(code **)((longlong)auVar9 + 0x40))(auVar9);
    (**(code **)((longlong)auVar9 + 0x38))(auVar9);
    pcVar13 = *(char **)auVar9;
    (**(code **)((longlong)auVar9 + 0x40))(auVar9);
    (**(code **)((longlong)auVar9 + 0x38))(auVar9);
    uVar12 = *(ulonglong *)((longlong)auVar9 + 0x10);
    pcVar10 = (char *)(uVar12 - 6);
    if (*(char **)auVar9 <= pcVar10) {
      pcVar2 = *(char **)auVar9;
      local_160 = puVar1;
      do {
        _Str1 = pcVar2;
        iVar5 = (int)*(ulonglong *)((longlong)auVar9 + 0x18);
        if (iVar5 != 0) goto LAB_1401562da;
        if ((_Str1 <= (char *)(uVar12 - 9) && *_Str1 == 'S') &&
           (iVar3 = strncmp(_Str1,"StartData",9), iVar3 == 0)) {
          *(char **)local_168 = pcVar8;
          (**(code **)((longlong)local_168 + 0x70))(local_168,&local_158);
          auVar9 = local_168;
          uVar12 = local_170;
          iVar5 = 0;
          if ((CONCAT71((undefined7)auStack_14f[0],local_150) - (longlong)local_158 == 5) &&
             ((char)local_158[1] == ')' && *local_158 == 0x78654828)) {
            *(char **)local_168 = pcVar13;
            iVar3 = (**(code **)((longlong)local_168 + 0x48))(local_168);
            if (iVar3 < 0) {
              iVar5 = 3;
            }
            else {
              *(int *)((longlong)auVar9 + 0xa8) = iVar3;
            }
          }
          puVar1 = local_160;
          iVar3 = ((int)_Str1 - (int)*local_160) + 10;
          if (iVar3 != iVar4) {
            FUN_14012dd2b(uVar12,local_160);
            iVar4 = local_174;
            iVar5 = FUN_14012d612(uVar12,local_174);
            if (iVar5 == 0) {
              uVar6 = iVar3 - iVar4;
              iVar5 = FUN_14012dc0a(uVar12,uVar6,puVar1);
              if (iVar5 == 0) {
                *(int *)((longlong)local_168 + 0xa4) = iVar3;
                *(uint *)((longlong)local_168 + 0xa0) = uVar6;
                uVar12 = *(ulonglong *)((longlong)local_168 + 0x98);
                *(ulonglong *)((longlong)local_168 + 8) = uVar12;
                *(ulonglong *)local_168 = uVar12;
                *(ulonglong *)((longlong)local_168 + 0x10) = uVar6 + uVar12;
                iVar5 = 0;
              }
            }
          }
          goto LAB_1401562da;
        }
        auVar9 = local_168;
        if ((_Str1[1] == 's') && (iVar3 = strncmp(_Str1,"/sfnts",6), iVar3 == 0))
        goto LAB_1401562d4;
        (**(code **)((longlong)auVar9 + 0x40))(auVar9);
        (**(code **)((longlong)auVar9 + 0x38))(auVar9);
        pcVar2 = *(char **)auVar9;
        pcVar8 = pcVar13;
        pcVar13 = _Str1;
      } while (*(char **)auVar9 <= pcVar10);
    }
  }
  iVar5 = 3;
LAB_1401562da:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_198)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_198);
  }
  return iVar5;
}

