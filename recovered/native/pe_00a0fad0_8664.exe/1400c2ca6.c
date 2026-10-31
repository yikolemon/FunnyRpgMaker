/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c2ca6 */

undefined8 FUN_1400c2ca6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 local_120 [56];
  undefined1 local_e8 [56];
  wchar_t *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  char *local_98;
  char *local_90;
  ulonglong local_88 [4];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  *(int *)(param_1 + 0x230) = *(int *)(param_2 + 0x3c) + 9;
  FUN_1400c4c2e(param_2,&local_68);
  if ((undefined8 *)(param_1 + 0x58) != &local_68) {
    FUN_140016e5c();
    *(undefined8 *)(param_1 + 0x58) = local_68;
    *(undefined8 *)(param_1 + 0x60) = uStack_60;
    *(undefined8 *)(param_1 + 0x68) = local_58;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
  }
  FUN_140016e5c(&local_68);
  lVar1 = param_2 + 0x10;
  uVar4 = FUN_14008aab0(lVar1);
  *(undefined4 *)(param_1 + 0x70) = uVar4;
  FUN_14009aeee(param_2,&local_68);
  FUN_14000ff1e(param_1 + 0x78,&local_68);
  FUN_140005242(&local_68);
  FUN_14009aeee(param_2,&local_68);
  lVar2 = param_1 + 0x98;
  FUN_14000ff1e(lVar2,&local_68);
  FUN_140005242(&local_68);
  cVar3 = FUN_14001014c(lVar2,&DAT_1401d4830);
  if (cVar3 == '\0') {
    local_a0 = 0x5b00000059;
    local_98 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG\\GameDat.hpp"
    ;
    local_90 = "virtual bool __cdecl GameDat::load(FileCoder &)";
    FUN_140087af8(local_88);
    local_b0 = L"{}Invalid magic string: \"{}\" expected: \"{}\"";
    local_a8 = 0x2b;
    FUN_1400c4ce1(&local_68,&local_b0,local_88,lVar2,&DAT_1401d4830);
    FUN_140087b76(local_120,&local_68);
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_120,&DAT_1401a5720);
  }
  FUN_1400c4c2e(param_2,&local_68);
  if ((undefined8 *)(param_1 + 0xb8) != &local_68) {
    FUN_140016e5c();
    *(undefined8 *)(param_1 + 0xb8) = local_68;
    *(undefined8 *)(param_1 + 0xc0) = uStack_60;
    *(undefined8 *)(param_1 + 200) = local_58;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
  }
  FUN_140016e5c(&local_68);
  FUN_14009aeee(param_2,&local_68);
  FUN_14000ff1e(param_1 + 0xd0,&local_68);
  FUN_140005242(&local_68);
  iVar5 = 3;
  do {
    FUN_14009aeee(param_2,&local_68);
    FUN_1400436a6(param_1 + 0xf0,&local_68);
    FUN_140005242(&local_68);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  FUN_14009aeee(param_2,&local_68);
  FUN_14000ff1e(param_1 + 0x108,&local_68);
  FUN_140005242(&local_68);
  if (8 < *(uint *)(param_1 + 0x70)) {
    FUN_14009aeee(param_2,&local_68);
    FUN_14000ff1e(param_1 + 0x128,&local_68);
    FUN_140005242(&local_68);
    if (9 < *(uint *)(param_1 + 0x70)) {
      FUN_14009aeee(param_2,&local_68);
      FUN_14000ff1e(param_1 + 0x148,&local_68);
      FUN_140005242(&local_68);
      FUN_14009aeee(param_2,&local_68);
      FUN_14000ff1e(param_1 + 0x168,&local_68);
      FUN_140005242(&local_68);
      FUN_14009aeee(param_2,&local_68);
      FUN_14000ff1e(param_1 + 0x188,&local_68);
      FUN_140005242(&local_68);
      FUN_14009aeee(param_2,&local_68);
      FUN_14000ff1e(param_1 + 0x1a8,&local_68);
      FUN_140005242(&local_68);
      if (0xd < *(uint *)(param_1 + 0x70)) {
        FUN_14009aeee(param_2,&local_68);
        FUN_14000ff1e(param_1 + 0x1c8,&local_68);
        FUN_140005242(&local_68);
      }
    }
  }
  uVar4 = FUN_14008aab0(lVar1);
  *(undefined4 *)(param_1 + 0x1e8) = uVar4;
  uVar4 = FUN_14008aab0(lVar1);
  *(undefined4 *)(param_1 + 0x1ec) = uVar4;
  iVar5 = FUN_14008aab0(lVar1);
  *(int *)(param_1 + 0x1f0) = iVar5;
  local_88[0] = (ulonglong)(uint)(iVar5 * 2);
  FUN_140089bf6(param_2,&local_68);
  if ((undefined8 *)(param_1 + 0x1f8) != &local_68) {
    FUN_140016e5c();
    *(undefined8 *)(param_1 + 0x1f8) = local_68;
    *(undefined8 *)(param_1 + 0x200) = uStack_60;
    *(undefined8 *)(param_1 + 0x208) = local_58;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
  }
  FUN_140016e5c(&local_68);
  uVar4 = FUN_14008aab0(lVar1);
  *(undefined4 *)(param_1 + 0x210) = uVar4;
  uVar4 = FUN_14008aab0(lVar1);
  *(undefined4 *)(param_1 + 0x214) = uVar4;
  local_88[0] = 0xffffffffffffffff;
  FUN_140089bf6(param_2,&local_68);
  if ((undefined8 *)(param_1 + 0x218) != &local_68) {
    FUN_140016e5c();
    *(undefined8 *)(param_1 + 0x218) = local_68;
    *(undefined8 *)(param_1 + 0x220) = uStack_60;
    *(undefined8 *)(param_1 + 0x228) = local_58;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
  }
  FUN_140016e5c(&local_68);
  if ((*(int *)(param_2 + 4) == 0) && (*(uint *)(param_2 + 0x3c) <= *(uint *)(param_2 + 0x38))) {
    return CONCAT71((uint7)(uint3)(*(uint *)(param_2 + 0x3c) >> 8),1);
  }
  local_a0 = 0x1b00000082;
  local_98 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG\\GameDat.hpp"
  ;
  local_90 = "virtual bool __cdecl GameDat::load(FileCoder &)";
  FUN_140087f79(local_88);
  FUN_14000ed8c(&local_68,local_88,"Game.dat has more data than expected");
  FUN_1400886d4(local_e8,&local_68);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_e8,&DAT_1401a5720);
}

