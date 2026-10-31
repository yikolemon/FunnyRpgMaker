/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801b81b7 */

void FUN_1801b81b7(void)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar4;
  ulonglong uVar3;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  cVar2 = FUN_18014c2cb("Multi-component Widgets");
  if (cVar2 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x827,"Widgets/Multi-component Widgets");
    thunk_FUN_18013698f("ImGuiSliderFlags_ColorMarkers",&DAT_18041fcdc,0x1000);
    FUN_1801380f1("2-wide");
    FUN_18014606a("input float2",&DAT_1804049b0,"%.3f",0);
    FUN_18014619c("input int2",&DAT_1804049c0,0);
    uVar1 = DAT_1802df044;
    uVar5 = CONCAT44(uVar7,DAT_18041fcdc);
    FUN_18013d340("drag float2",&DAT_1804049b0,DAT_1802df044,0,CONCAT44(uVar4,0x3f800000),0,uVar5);
    uVar4 = DAT_1802ac570;
    uVar5 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),DAT_18041fcdc);
    uVar7 = 0;
    FUN_18013d7ad("drag int2",&DAT_1804049c0,DAT_1802ac570,0,0xff,0,uVar5);
    uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
    FUN_180141402("slider float2",&DAT_1804049b0,0,uVar4,0,CONCAT44(uVar7,DAT_18041fcdc));
    uVar7 = 0;
    FUN_18014169d("slider int2",&DAT_1804049c0,0,0xff,0,DAT_18041fcdc);
    FUN_1801380f1("3-wide");
    FUN_18014609c("input float3",&DAT_1804049b0,"%.3f",0);
    FUN_1801461d5("input int3",&DAT_1804049c0,0);
    uVar5 = CONCAT44(uVar8,DAT_18041fcdc);
    FUN_18013d3c7("drag float3",&DAT_1804049b0,uVar1,0,CONCAT44(uVar7,0x3f800000),0,uVar5);
    uVar5 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),DAT_18041fcdc);
    uVar7 = 0;
    FUN_18013d832("drag int3",&DAT_1804049c0,uVar4,0,0xff,0,uVar5);
    uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
    FUN_180141485("slider float3",&DAT_1804049b0,0,uVar4,0,CONCAT44(uVar7,DAT_18041fcdc));
    uVar7 = 0;
    FUN_180141721("slider int3",&DAT_1804049c0,0,0xff,0,DAT_18041fcdc);
    FUN_1801380f1("4-wide");
    FUN_1801460ce("input float4",&DAT_1804049b0,"%.3f",0);
    FUN_18014620e("input int4",&DAT_1804049c0,0);
    FUN_18013d44e("drag float4",&DAT_1804049b0,uVar1,0,CONCAT44(uVar7,0x3f800000),0,
                  CONCAT44(uVar8,DAT_18041fcdc));
    uVar7 = 0;
    FUN_18013d8b7("drag int4",&DAT_1804049c0,uVar4,0,0xff,0,DAT_18041fcdc);
    uVar5 = CONCAT44(uVar7,DAT_18041fcdc);
    FUN_180141508("slider float4",&DAT_1804049b0,0,uVar4,0,uVar5);
    uVar5 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),DAT_18041fcdc);
    uVar3 = 0;
    FUN_1801417a5("slider int4",&DAT_1804049c0,0,0xff,0,uVar5);
    uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
    FUN_1801380f1("Ranges");
    uVar3 = uVar3 & 0xffffffff00000000;
    uVar5 = CONCAT44(uVar4,0x42c80000);
    FUN_18013d4d5("range float",&DAT_1804049d0,&DAT_1804049d4,DAT_1802de728,uVar3,uVar5,
                  "Min: %.1f %%","Max: %.1f %%",0x600);
    uVar4 = DAT_1802dc2d0;
    uVar3 = uVar3 & 0xffffffff00000000;
    uVar6 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),1000);
    FUN_18013d93c("range int",&DAT_1804049d8,&DAT_1804049dc,DAT_1802dc2d0,uVar3,uVar6,
                  "Min: %d units","Max: %d units",0);
    FUN_18013d93c("range int (no bounds)",&DAT_1804049d8,&DAT_1804049dc,uVar4,
                  uVar3 & 0xffffffff00000000,uVar6 & 0xffffffff00000000,"Min: %d units",
                  "Max: %d units",0);
    FUN_18014d7a9();
    return;
  }
  return;
}

