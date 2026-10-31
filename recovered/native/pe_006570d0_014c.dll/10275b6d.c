/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10275b6d */

bool FUN_10275b6d(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  int iVar7;
  undefined2 uVar8;
  int local_8;
  
  uVar6 = 0;
  local_8 = 0;
  iVar2 = FUN_10275350(&local_8);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (local_8 == 0) {
LAB_10275d7a:
    bVar1 = false;
  }
  else {
    iVar2 = param_1[5];
    if ((iVar2 != DAT_1039b660) || (iVar2 != DAT_1039b66c)) {
      if (DAT_103a5170 == 0) {
        FUN_10275a22(0,1,iVar2,(iVar2 < 0x6b) + '\x03',(0x6a < iVar2) + '\x01',0,0,2,0,0,0);
        uVar3 = 5;
        if (0x6a < iVar2) {
          uVar3 = 1;
        }
        FUN_10275a22(1,1,param_1[5],(0x6a < iVar2) + '\n',uVar3,0,0,2,0,0,0);
      }
      else {
        if (DAT_103a5210 != 0) {
          uVar4 = 0;
          uVar5 = 0;
          uVar8 = DAT_103a5216;
        }
        else {
          uVar5 = DAT_103a5214;
          uVar4 = DAT_103a5216;
          uVar8 = 0;
        }
        FUN_10275a22(0,DAT_103a5210 == 0,iVar2,DAT_103a5212,uVar4,uVar5,uVar8,DAT_103a5218,
                     DAT_103a521a,DAT_103a521c,DAT_103a521e);
        uVar5 = DAT_103a51c2;
        uVar8 = DAT_103a51c0;
        if (DAT_103a51bc != 0) {
          uVar5 = 0;
          uVar8 = 0;
          uVar6 = DAT_103a51c2;
        }
        FUN_10275a22(1,DAT_103a51bc == 0,param_1[5],DAT_103a51be,uVar5,uVar8,uVar6,DAT_103a51c4,
                     DAT_103a51c6,DAT_103a51c8,DAT_103a51ca);
      }
    }
    iVar2 = param_1[7];
    if (DAT_1039b664 < DAT_1039b670) {
      if ((iVar2 < DAT_1039b664) || (DAT_1039b670 < iVar2)) goto LAB_10275d7a;
      if ((DAT_1039b664 < iVar2) && (iVar2 < DAT_1039b670)) {
        return true;
      }
    }
    else {
      if (iVar2 < DAT_1039b670) {
        return true;
      }
      if (DAT_1039b664 < iVar2) {
        return true;
      }
      if ((DAT_1039b670 < iVar2) && (iVar2 < DAT_1039b664)) goto LAB_10275d7a;
    }
    iVar7 = ((param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1) * 1000;
    if (iVar2 == DAT_1039b664) {
      bVar1 = DAT_1039b668 <= iVar7;
    }
    else {
      bVar1 = iVar7 < DAT_1039b674;
    }
  }
  return bVar1;
}

