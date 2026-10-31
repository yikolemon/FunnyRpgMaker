/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400a6926 */

undefined8 FUN_1400a6926(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_d8 [56];
  undefined8 local_a0;
  char *local_98;
  char *local_90;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  cVar2 = FUN_14009dbfe(param_2,&DAT_1401cc7f8);
  if (cVar2 != '\0') {
    lVar7 = param_2 + 0x10;
    uVar3 = FUN_14008aab0(lVar7);
    *(undefined4 *)(param_1 + 0x78) = uVar3;
    iVar4 = FUN_14008aab0(lVar7);
    *(int *)(param_1 + 0x58) = iVar4;
    if (*(int *)(param_1 + 0x78) == 120000) {
      FUN_14009aeee(param_2,local_68);
      FUN_14000ff1e(param_1 + 0x80,local_68);
      FUN_140005242(local_68);
      iVar4 = *(int *)(param_1 + 0x58);
    }
    if (iVar4 != 0) {
      lVar8 = 0x7c;
      uVar6 = 0;
      do {
        lVar1 = *(longlong *)(param_1 + 0x40);
        uVar3 = FUN_14008aab0(lVar7);
        *(undefined4 *)(lVar1 + lVar8) = uVar3;
        uVar6 = uVar6 + 1;
        lVar8 = lVar8 + 0x80;
      } while (uVar6 < *(uint *)(param_1 + 0x58));
    }
    uVar6 = FUN_14008aab0(lVar7);
    lVar7 = *(longlong *)(param_1 + 0x60);
    lVar8 = *(longlong *)(param_1 + 0x68);
    uVar5 = (lVar8 - lVar7 >> 3) * 0x2e8ba2e8ba2e8ba3;
    uVar6 = uVar6 & 0xffffffff;
    if (uVar6 <= uVar5 && uVar5 - uVar6 != 0) {
      FUN_1400a86fe(param_1 + 0x60,uVar6,local_68);
      lVar7 = *(longlong *)(param_1 + 0x60);
      lVar8 = *(longlong *)(param_1 + 0x68);
    }
    if (lVar7 != lVar8) {
      do {
        FUN_1400a85c8(lVar7,param_2,param_1 + 0x40,(int *)(param_1 + 0x58));
        lVar7 = lVar7 + 0x58;
      } while (lVar7 != lVar8);
    }
    return 1;
  }
  local_a0 = 0x290000019c;
  local_98 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG/Database.hpp"
  ;
  local_90 = "bool __cdecl Type::ReadDat(FileCoder &)";
  FUN_140087f79(local_88);
  FUN_14000ed8c(local_68,local_88,"MAGIC invalid");
  FUN_1400886d4(local_d8,local_68);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_d8,&DAT_1401a5720);
}

