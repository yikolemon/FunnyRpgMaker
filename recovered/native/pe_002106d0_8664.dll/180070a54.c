/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180070a54 */

undefined8 FUN_180070a54(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 local_130 [56];
  undefined1 local_f8 [56];
  wchar_t *local_c0;
  undefined8 local_b8;
  char *local_b0;
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
  iVar5 = *(int *)(param_2 + 0x3c);
  *(int *)(param_1 + 0x230) = iVar5 + -1;
  if ((*(int *)(param_2 + 4) != 0) || (*(int *)(param_2 + 0x38) == 0)) {
    *(int *)(param_1 + 0x230) = iVar5 + 9;
  }
  FUN_18008b7ec(param_2,&local_68);
  if ((undefined8 *)(param_1 + 0x58) != &local_68) {
    FUN_180004cea();
    *(undefined8 *)(param_1 + 0x58) = local_68;
    *(undefined8 *)(param_1 + 0x60) = uStack_60;
    *(undefined8 *)(param_1 + 0x68) = local_58;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
  }
  FUN_180004cea(&local_68);
  lVar1 = param_2 + 0x10;
  uVar4 = FUN_180078646(lVar1);
  *(undefined4 *)(param_1 + 0x70) = uVar4;
  FUN_18008b8a0(param_2,&local_68);
  FUN_180012524(param_1 + 0x78,&local_68);
  FUN_1800010ec(&local_68);
  FUN_18008b8a0(param_2,&local_68);
  lVar2 = param_1 + 0x98;
  FUN_180012524(lVar2,&local_68);
  FUN_1800010ec(&local_68);
  cVar3 = FUN_18008c028(lVar2,&DAT_180417c48);
  if (cVar3 == '\0') {
    local_a0 = 0x5b00000073;
    local_98 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\GameDat.hpp"
    ;
    local_90 = "virtual bool __cdecl GameDat::load(FileCoder &)";
    FUN_18008148e(local_88);
    local_c0 = L"{}Invalid magic string: \"{}\" expected: \"{}\"";
    local_b8 = 0x2b;
    FUN_18008bb1a(&local_68,&local_c0,local_88,lVar2,&DAT_180417c48);
    FUN_18008150c(local_130,&local_68);
                    /* WARNING: Subroutine does not return */
    FUN_18026d5b0(local_130,&DAT_1803a63b0);
  }
  FUN_18008b7ec(param_2,&local_68);
  if ((undefined8 *)(param_1 + 0xb8) != &local_68) {
    FUN_180004cea();
    *(undefined8 *)(param_1 + 0xb8) = local_68;
    *(undefined8 *)(param_1 + 0xc0) = uStack_60;
    *(undefined8 *)(param_1 + 200) = local_58;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
  }
  FUN_180004cea(&local_68);
  FUN_18008b8a0(param_2,&local_68);
  FUN_180012524(param_1 + 0xd0,&local_68);
  FUN_1800010ec(&local_68);
  iVar5 = 3;
  do {
    FUN_18008b8a0(param_2,&local_68);
    FUN_18008c110(param_1 + 0xf0,&local_68);
    FUN_1800010ec(&local_68);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  FUN_18008b8a0(param_2,&local_68);
  FUN_180012524(param_1 + 0x108,&local_68);
  FUN_1800010ec(&local_68);
  if (8 < *(uint *)(param_1 + 0x70)) {
    FUN_18008b8a0(param_2,&local_68);
    FUN_180012524(param_1 + 0x128,&local_68);
    FUN_1800010ec(&local_68);
    if (9 < *(uint *)(param_1 + 0x70)) {
      FUN_18008b8a0(param_2,&local_68);
      FUN_180012524(param_1 + 0x148,&local_68);
      FUN_1800010ec(&local_68);
      FUN_18008b8a0(param_2,&local_68);
      FUN_180012524(param_1 + 0x168,&local_68);
      FUN_1800010ec(&local_68);
      FUN_18008b8a0(param_2,&local_68);
      FUN_180012524(param_1 + 0x188,&local_68);
      FUN_1800010ec(&local_68);
      FUN_18008b8a0(param_2,&local_68);
      FUN_180012524(param_1 + 0x1a8,&local_68);
      FUN_1800010ec(&local_68);
      if (0xd < *(uint *)(param_1 + 0x70)) {
        FUN_18008b8a0(param_2,&local_68);
        FUN_180012524(param_1 + 0x1c8,&local_68);
        FUN_1800010ec(&local_68);
      }
    }
  }
  uVar4 = FUN_180078646(lVar1);
  *(undefined4 *)(param_1 + 0x1e8) = uVar4;
  uVar4 = FUN_180078646(lVar1);
  *(undefined4 *)(param_1 + 0x1ec) = uVar4;
  iVar5 = FUN_180078646(lVar1);
  *(int *)(param_1 + 0x1f0) = iVar5;
  local_88[0] = (ulonglong)(uint)(iVar5 * 2);
  FUN_18007750c(param_2,&local_68);
  if ((undefined8 *)(param_1 + 0x1f8) != &local_68) {
    FUN_180004cea();
    *(undefined8 *)(param_1 + 0x1f8) = local_68;
    *(undefined8 *)(param_1 + 0x200) = uStack_60;
    *(undefined8 *)(param_1 + 0x208) = local_58;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
  }
  FUN_180004cea(&local_68);
  uVar4 = FUN_180078646(lVar1);
  *(undefined4 *)(param_1 + 0x210) = uVar4;
  uVar4 = FUN_180078646(lVar1);
  *(undefined4 *)(param_1 + 0x214) = uVar4;
  local_88[0] = 0xffffffffffffffff;
  FUN_18007750c(param_2,&local_68);
  if ((undefined8 *)(param_1 + 0x218) != &local_68) {
    FUN_180004cea();
    *(undefined8 *)(param_1 + 0x218) = local_68;
    *(undefined8 *)(param_1 + 0x220) = uStack_60;
    *(undefined8 *)(param_1 + 0x228) = local_58;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
  }
  FUN_180004cea(&local_68);
  if ((*(int *)(param_2 + 4) == 0) && (*(uint *)(param_2 + 0x3c) <= *(uint *)(param_2 + 0x38))) {
    return CONCAT71((uint7)(uint3)(*(uint *)(param_2 + 0x3c) >> 8),1);
  }
  local_a0 = 0x510000009c;
  local_98 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\GameDat.hpp"
  ;
  local_90 = "virtual bool __cdecl GameDat::load(FileCoder &)";
  FUN_180072a20(local_88);
  local_b0 = "{}Game.dat has more data than expected";
  local_a8 = 0x26;
  FUN_1800729a4(&local_68,&local_b0,local_88);
  FUN_18006f972(local_f8,&local_68);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_f8,&DAT_1803a63b0);
}

