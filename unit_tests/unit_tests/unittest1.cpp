#include "stdafx.h"
#include "CppUnitTest.h"

#include "catch.hpp"
#include "decorator.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace unit_tests
{		
	TEST_CASE("CLASSIC_PAVEMENT")
	{
		Simple_Pavement *p = new Simple_Pavement();
		Pavement_Decorator *cl = new Pavement_Decorator(p);
		int pr = cl->getPrice();
		REQUIRE(pr == 100);
	};
	TEST_CASE("CLASSIC_PAVEMENT2")
	{
		Simple_Pavement *p = new Simple_Pavement();
		Pavement_Decorator *cl = new Pavement_Decorator(p);
		string ds = cl->getDescription();
		REQUIRE(ds == "Classic pavement");
	};
	TEST_CASE("COLORED")
	{
		Simple_Pavement *p = new Simple_Pavement();
		Colored *cl = new Colored(p);
		int pr = cl->getPrice();
		REQUIRE(pr == 150);
	};
	TEST_CASE("COLORED2")
	{
		Simple_Pavement *p = new Simple_Pavement();
		Colored *cl = new Colored(p);
		string ds = cl->getDescription();
		REQUIRE(ds == "Classic pavement, in different colors");
	};
	TEST_CASE("triangle")
	{
		Simple_Pavement *p = new Simple_Pavement();
		Formed *cl = new Formed(p);
		int pr = cl->getPrice();
		REQUIRE(pr == 180);
	}
	TEST_CASE("triangle2")
	{
		Simple_Pavement *p = new Simple_Pavement();
		Formed *cl = new Formed(p);
		string ds = cl->getDescription();
		REQUIRE(ds == "Classic pavement, in triangle form");
	};
	TEST_CASE("stone")
	{
		Simple_Pavement *p = new Simple_Pavement();
		Stone_Imitation *st = new Stone_Imitation(p);
		int pr = st->getPrice();
		REQUIRE(pr == 380);
	};
	TEST_CASE("stone2")
	{
		Simple_Pavement *p = new Simple_Pavement();
		Stone_Imitation *st = new Stone_Imitation(p);
		string ds = st->getDescription();
		REQUIRE(ds == "Classic pavement, stone-imitated");
	};
	TEST_CASE("soft")
	{
		Simple_Pavement *p = new Simple_Pavement();
		Soft_tehnology *st = new Soft_tehnology(p);
		int pr = st->getPrice();
		REQUIRE(pr == 465);
	};
	TEST_CASE("soft2")
	{
		Simple_Pavement *p = new Simple_Pavement();
		Soft_tehnology *st = new Soft_tehnology(p);
		string ds = st->getDescription();
		REQUIRE(ds == "Classic pavement, made in soft technology");
	};
}