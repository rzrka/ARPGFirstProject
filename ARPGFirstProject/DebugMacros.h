#pragma once

#define EWORLD if (!GetWorld()) return;

#define DRAW_SPHERE(location, color) EWORLD DrawDebugSphere(GetWorld(), location, 25.f, 12, (color), true);
#define DRAW_SPHERE_SINGLEFRAME(location, color) EWORLD DrawDebugSphere(GetWorld(), location, 25.f, 12, (color), false, -1.f);
#define DRAW_BOX(location, size) EWORLD DrawDebugBox(GetWorld(), location, size, FColor::Blue, true, 25.f, 0, 1)
#define DRAW_LINE(start_location, end_location) EWORLD DrawDebugLine(GetWorld(), (start_location), (end_location), FColor::Red, true, -1.f, 0, 1);
#define DRAW_LINE_SINGLEFRAME(start_location, end_location) EWORLD DrawDebugLine(GetWorld(), (start_location), (end_location), FColor::Red, false, -1.f, 0, 1);
#define DRAW_POINT(location) EWORLD DrawDebugPoint(GetWorld(), (location), 15.f, FColor::Red, true);
#define DRAW_POINT_SINGLEFRAME(location) EWORLD DrawDebugPoint(GetWorld(), (location), 15.f, FColor::Red, false, -1.f);
#define DRAW_VECTOR(start_location, end_location) EWORLD \
	{ \
		DRAW_LINE(start_location, end_location) \
		DRAW_POINT(end_location) \
	};

#define DRAW_VECTOR_SINGLEFRAME(start_location, end_location) EWORLD \
	{ \
		DRAW_LINE_SINGLEFRAME(start_location, end_location) \
		DRAW_POINT_SINGLEFRAME(end_location) \
	};