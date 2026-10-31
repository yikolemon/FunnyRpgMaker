/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403603fd */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_1403603fd(void)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  ulonglong local_28;
  
  lVar4 = DAT_14062a630;
  local_28 = ram0x000140613b10 ^ (ulonglong)auStack_68;
  piVar2 = *(int **)(DAT_14062a630 + 0x2638);
  lVar7 = *(longlong *)(piVar2 + 10);
  lVar3 = *(longlong *)(DAT_14062a630 + 0x1608);
  if (piVar2[0xc] != *(int *)(DAT_14062a630 + 0x1f9c)) {
    FUN_140312b68(
                 "\n            var time = SceneManager._getTimeInMsWithoutMobileSafari_Game_Backup.apply(this, arguments);\n            if (SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeReal === undefined || !SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeFake === undefined) {\n                SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeReal = time;\n                SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeFake = time;\n            }\n            SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeFake += (time - SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeReal) * window.__FunnyGame__GlobalSpeedRatio__;\n            SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeReal = time;\n            return SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeFake;\n        };\n    }\n}\nif (SceneManager.determineRepeatNumber) {\n    if (!SceneManager.determineRepeatNumber_Game_Backup) {\n        SceneManager.determineRepeatNumber_Game_Backup = SceneManager.determineRepeatNumber;\n        SceneManager.determineRepeatNumber = function (deltaTime) {\n            deltaTime *= window.__FunnyGame__GlobalSpeedRatio__;\n\t\t\treturn SceneManager.determineRepeatNumber_Game_Backup.apply(this, arguments);\n\t\t};\n    }\n}\n"
                 );
  }
  FUN_1403601fc(&local_38,piVar2,lVar3);
  if (*(char *)((longlong)piVar2 + 0x52) == '\x01') {
    if ((*(char *)((longlong)piVar2 + 0x21) != '\0') ||
       ((*(char *)((longlong)piVar2 + 0x55) == '\0' && (*(longlong *)(piVar2 + 4) != -1)))) {
      if ((*(byte *)(lVar4 + 0x2acc) & 0x40) != 0) {
        FUN_14030f4ba(" NavMoveSubmitted but not led to a result!\n");
      }
      *(undefined8 *)(lVar7 + 0x18) = 0xffffffffffffffff;
    }
    if (((char)piVar2[0x15] == '\0') && (*(longlong *)(lVar7 + 0x20) != -1)) {
      if ((*(byte *)(lVar4 + 0x2acc) & 0x40) != 0) {
        FUN_14030f4ba("or \"%s\"\n");
      }
      *(undefined8 *)(lVar7 + 0x20) = 0xffffffffffffffff;
      *(undefined1 *)(lVar7 + 0x15) = 0xff;
    }
    if (((((piVar2[0xd] & 0xc0U) != 0) && (piVar2[0x12] != 0)) &&
        (*(int *)(DAT_14062a630 + 0x25b0) == piVar2[0x12])) &&
       (*(char *)(DAT_14062a630 + 0x25b4) == '\x01')) {
      FUN_14035f762(&local_38);
    }
  }
  if (*(char *)((longlong)piVar2 + 0x51) == '\0') {
    if (piVar2[1] < 0) {
      uVar6 = FUN_14030fcc8(0);
      if (*(longlong *)(piVar2 + 2) != 0) {
        FUN_1404b97c0(uVar6,*(longlong *)(piVar2 + 2),(longlong)*piVar2 * 0x18);
        FUN_14030fda4(*(undefined8 *)(piVar2 + 2));
      }
      *(undefined8 *)(piVar2 + 2) = uVar6;
      piVar2[1] = 0;
    }
    *piVar2 = 0;
  }
  if ((((*(float *)(lVar3 + 0x278) <= *(float *)(lVar4 + 0x118)) &&
       (*(float *)(lVar3 + 0x27c) <= *(float *)(lVar4 + 0x11c))) &&
      ((*(float *)(lVar4 + 0x118) < *(float *)(lVar3 + 0x280) &&
       ((*(float *)(lVar4 + 0x11c) < *(float *)(lVar3 + 0x284) &&
        (cVar5 = FUN_140327d6a(1), cVar5 != '\0')))))) &&
     (((uVar8 = piVar2[0xd], (uVar8 >> 0xc & 1) == 0 ||
       ((((local_38 <= *(float *)(lVar4 + 0x118) && (local_34 <= *(float *)(lVar4 + 0x11c))) &&
         (*(float *)(lVar4 + 0x118) < local_30)) && (*(float *)(lVar4 + 0x11c) < local_2c)))) &&
      ((*(int *)(lVar4 + 0x1664) == 0 && (*(int *)(lVar4 + 0x167c) == 0)))))) {
    if ((((uVar8 & 0xc0) != 0) &&
        ((*(char *)(lVar4 + 0x25b4) == '\0' && (*(char *)(lVar4 + 0x25b5) == '\0')))) &&
       (*(short *)(lVar4 + 0xb5a) == 1)) {
      FUN_1403607dc(piVar2[0x12],0xffffffffffffffff);
      FUN_1403195bc(lVar3,2);
      FUN_14031892f(piVar2[0x12]);
      uVar8 = piVar2[0xd];
      if ((uVar8 >> 0xc & 1) != 0) {
        local_48 = *(undefined8 *)(lVar4 + 0x118);
        local_40 = local_48;
        FUN_14032d4bf(0,0,piVar2[0xc]);
        uVar8 = piVar2[0xd];
      }
    }
    if (((((uVar8 >> 10 & 1) != 0) && (cVar5 = FUN_14032a241(0), cVar5 != '\0')) &&
        (cVar5 = FUN_14032a2ad(0,DAT_1404ccdb0), cVar5 == '\0')) && (*(int *)(lVar4 + 0x13c) == 0))
    {
      FUN_140360257(piVar2,0);
    }
  }
  lVar7 = DAT_14062a630;
  if ((*(byte *)((longlong)piVar2 + 0x36) & 1) != 0) {
    *(undefined1 *)(*(longlong *)(DAT_14062a630 + 0x1608) + 0x10b) = 1;
    FUN_14032cbb3(*(undefined8 *)(lVar7 + 0x1608),4);
  }
  if ((*(longlong *)(lVar4 + 0x24f8) != 0) &&
     (*(char *)(*(longlong *)(lVar4 + 0x24f8) + 0x23a) == '\x01')) {
    FUN_14037a238();
  }
  fVar10 = (float)*(undefined8 *)(piVar2 + 0x10);
  fVar11 = (float)((ulonglong)*(undefined8 *)(piVar2 + 0x10) >> 0x20);
  fVar12 = (float)*(undefined8 *)(lVar3 + 0x170);
  fVar13 = (float)((ulonglong)*(undefined8 *)(lVar3 + 0x170) >> 0x20);
  uVar8 = -(uint)(fVar12 <= fVar10);
  uVar9 = -(uint)(fVar13 <= fVar11);
  *(ulonglong *)(lVar3 + 0x170) =
       CONCAT44(~uVar9 & (uint)fVar13,~uVar8 & (uint)fVar12) |
       CONCAT44((uint)fVar11 & uVar9,(uint)fVar10 & uVar8);
  FUN_1403274f8();
  if ((*(byte *)(lVar4 + 0x2acc) & 0x40) != 0) {
    FUN_14036031b("Examples/Menu/Colors",piVar2);
  }
  piVar2[0xc] = 0;
  piVar2[0xd] = 0;
  iVar1 = *(int *)(lVar4 + 0x2640);
  *(int *)(lVar4 + 0x2640) = iVar1 + -1;
  if ((longlong)iVar1 < 2) {
    lVar7 = 0;
  }
  else {
    lVar7 = (longlong)iVar1 * 0x58 + *(longlong *)(lVar4 + 0x2650) + -0xb0;
  }
  *(longlong *)(lVar4 + 0x2638) = lVar7;
  if (ram0x000140613b10 != (local_28 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_14044aba0(local_28 ^ (ulonglong)auStack_68);
  }
  return piVar2;
}

